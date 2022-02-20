from Hardware import Hardware


class Memory(Hardware):

    def __init__(self, frequency=0, memorySize=0, supportCuda=0):
        self.__frequency = frequency
        self.__memorySize = memorySize
        self.__supportCuda = supportCuda

    def setFrequency(self, frequency):
        self.__frequency = frequency

    def setMemorySize(self, memorySize):
        self.__memorySize = memorySize

    def setSupportCuda(self, supportCuda):
        self.__supportCuda = supportCuda

    def getFrequency(self):
        return self.__frequency

    def getMemorySize(self):
        return self.__memorySize

    def getSupportCuda(self):
        return self.__supportCuda
