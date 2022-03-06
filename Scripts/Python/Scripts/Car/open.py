import os
os.system("sudo ip link set can0 type can bitrate 1000000")
os.system("sudo ifconfig can0 up")
