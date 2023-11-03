import cv2

def extract_video_info(video_path):
    try:
        cap = cv2.VideoCapture(video_path)

        if not cap.isOpened():
            print("Error: Couldn't open video file.")
            return

        # Get video properties
        width = int(cap.get(cv2.CAP_PROP_FRAME_WIDTH))
        height = int(cap.get(cv2.CAP_PROP_FRAME_HEIGHT))
        frame_count = int(cap.get(cv2.CAP_PROP_FRAME_COUNT))
        frame_rate = int(cap.get(cv2.CAP_PROP_FPS))
        duration = frame_count / frame_rate
        video_format = video_path.split('.')[-1].upper()

        print(f"Video format: {video_format}")
        print(f"Frame width: {width} pixels")
        print(f"Frame height: {height} pixels")
        print(f"Frame count: {frame_count}")
        print(f"Frame rate: {frame_rate} FPS")
        print(f"Duration: {duration} seconds")

        cap.release()
    except Exception as e:
        print(f"An error occurred: {str(e)}")

if __name__ == "__main__":
    video_path = "Video1.mp4"
    extract_video_info(video_path)