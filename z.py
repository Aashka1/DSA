import cv2
import os

image_folder = r'D:\openCV\Resources\photopng'
images = [img for img in os.listdir(image_folder) if img.endswith(".png")]
frame = cv2.imread(os.path.join(image_folder, images[0]), cv2.IMREAD_UNCHANGED)
height, width, layers = frame.shape
fourcc = cv2.VideoWriter_fourcc(*'VP90')  # Use 'VP80' for WebM codec
video = cv2.VideoWriter(r'D:\openCV\xyz.webm', fourcc, 25, (width, height))

for image in images:
    frame = cv2.imread(os.path.join(image_folder, image), cv2.IMREAD_UNCHANGED)
    video.write(frame)

video.release()
