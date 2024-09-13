import cv2,os
import numpy as np
image_folder = 'd:/desktop/webm/'
images = [img for img in os.listdir(image_folder) if img.endswith(".png")]
frame = cv2.imread(os.path.join(image_folder, images[0]))
height,width, layers = frame.shape
fourcc = cv2.VideoWriter_fourcc(*'vp90')
video = cv2.VideoWriter('d:/desktop/output_video.webm', fourcc, 25, (width,height))
for image in images:
    frame = cv2.imread(os.path.join(image_folder, image),cv2.IMREAD_UNCHANGED)
    video.write(frame)
video.release()