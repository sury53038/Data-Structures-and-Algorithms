from email import message
import time
from plyer import notification

if __name__ == "__main__":
    while True:
        notification.notify(
            title = "ALERT!!!",
            message = '''Are you studying?\nHave you checked your plans?''',
            timeout = 60
        )
        time.sleep(60 * 60)