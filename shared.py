''' AP 1/7/15: This old style of shared.py is going to be deprecated soon. '''

DEST_ADDR = '\x20\x52' # My (Justin's) robot address
#DEST_ADDR = '\x21\x02' # Duncan's robot address
xb = []
ser = []

#Xbee serial
#BS_COMPORT = '/dev/tty.usbserial-DA01MAM2' # My (Justin's) XBee on MacBook
BS_COMPORT = '/dev/tty.usbserial-A700eYd8' # My (Justin's) backup XBee on MacBook
#BS_COMPORT = '/dev/tty.usbserial-AD01UBK7' # Duncan's XBee on MacBook
BS_BAUDRATE = 57600     # Use this setting if your Xbee is set to baud rate of 57600
# BS_BAUDRATE = 111111   # Use this setting if your Xbee is set to baud rate of 115200

motor_gains_set = False
steering_gains_set = False
steering_rate_set = False
flash_erased = 0
pkts = 0
bytesIn = 0

last_packet_time = 0
readback_timeout = 2 #seconds

awake = True;

# Cross-module variable sharing; these need default values
imudata = []
dataFileName = ''
leadinTime = 0
leadoutTime = 0
angRateDeg = "NOT SET"  #This is only for writing the file header
angRate = "NOT SET"
motorGains = "NOT SET"
steeringGains = "NOT SET"
runtime = 0
numSamples = 0
moveq = "NOT SET"

robotQueried = False
maxQueries = 8

#This message will be removed in the future. It is here to facilitate from the changeover
#to use of imageproc-settings in projects.
print "shared.py from imageproc-settings"
