import os
import can

os.system("sudo ip link set can0 type can bitrate 1000000")
os.system("sudo ifconfig can0 up")

can0 = can.interface.Bus(channel="can0", bustype="socketcan_ctypes")

msg = can.Message(arbitration_id=0x123, data=[0,1,2,3], extended_id=False)

can0.send(msg)

msg = can0.recv(30.0)

os.system("sudo ifconfig can0 down")
