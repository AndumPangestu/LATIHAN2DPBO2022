import imp
from Memory import Memory

memori = Memory()
memori.setIdProduct("00001")
memori.setPrice(2000000)
memori.setBrand("ASES")
memori.setModel("Memory")
memori.setMemorySize(1000)
memori.setFrequency(1000)
memori.setSupportCuda(True)

print("================================")
print("DATA MEMORI : ")
print("================================")
print("- Id Product   : " + memori.getIdProduct())
print("- Price        : Rp." + str(memori.getPrice()))
print("- Brand        : " + memori.getBrand())
print("- Model        : " + memori.getModel())
print("- Memory Size  : " + str(memori.getMemorySize()))
print("- Frequency    : " + str(memori.getFrequency()))
if memori.getSupportCuda():
    print("- Support Cuda : YES")
else:
    print("- Support Cuda : NO")
print("================================")
