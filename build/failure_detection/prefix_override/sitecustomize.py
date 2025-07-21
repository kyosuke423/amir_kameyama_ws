import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/das-note-021/amir_kameyama_ws/install/failure_detection'
