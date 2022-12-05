import cv2
import numpy as np
import serial
cap = cv2.VideoCapture(1)

CLASSES = ["Level 1","Level 2","Level 3","Level 4"] # อันนี้เป็น ชื่อของมะม่วงแต่ละประเภท ถ้าต้องการ ประเภทที่ 1  ชื่อ อะไร ก็แปลี่ยนช่องชื่อที่ 1 ช่องอื่นๆ ก็เหมือนกัน

def box_type(x,y,w,h):
    cropped = frame[y:(y+h),x:(x+w)]
    meand = cv2.mean(cropped)
    print(meand)
    cv2.rectangle(frame,(x,y),(x+w,y+h),(0,0,255),2)
    cv2.rectangle(frame,(x+2,y+30),(x+w-2,y),meand[:-1],cv2.FILLED)
    return cropped

#-----------------------------------------------------#
# ให้เปลี่ยนขอบเขตสี ตามความกว้างที่อยากได้นะครับ
# แต่ละ level ที่เห็น คือ การแยกประเภทของความกว้างสี เพิ่อแบ่งชนิดสีของมะม่วง ที่ต้องการ

lowerlv1 = np.array([36,110,50])
upperlv1 = np.array([70,255,255])

lowerlv2 = np.array([30,80,50])
upperlv2 = np.array([34,255,255])

lowerlv3 = np.array([21,110,100])
upperlv3 = np.array([26,255,255])

lowerlv4 = np.array([12,110,50])
upperlv4 = np.array([20,255,255])
#-------------------------------------------------------#
Lowlevel = [lowerlv1,lowerlv2,lowerlv3,lowerlv4]
Uplevel = [upperlv1,upperlv2,upperlv3,upperlv4]
lv1,lv2,lv3,lv4 = 0,0,0,0
qty = [lv1,lv2,lv3,lv4]

def process(frame):
    into_hsv =cv2.cvtColor(frame,cv2.COLOR_BGR2HSV)
    for i in range(4):
        mask = cv2.inRange(into_hsv,Lowlevel[i],Uplevel[i])
        cons, _ =cv2.findContours(mask,cv2.RETR_EXTERNAL,cv2.CHAIN_APPROX_SIMPLE)
        if cons:            
            for c in cons:
                x ,y ,w ,h =cv2.boundingRect(c)
                area = w*h
                if 10000< area < 300000:
                    box = box_type(x,y,w,h)
                    name = CLASSES[i]
                    cv2.putText(frame,str(name),(x+10,y+20),cv2.FONT_HERSHEY_COMPLEX,0.4,(255,255,255),1)        
                    qty[i] +=1
while True:
    ret, frame = cap.read()
    frame = cv2.flip(frame,1)
    process(frame)
    cv2.imshow('Original',frame) # to display the original frame
    if cv2.waitKey(1)==27:
        break
frame.release()
cv2.destroyAllWindows()
