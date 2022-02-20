class Product():

    def __init__(self, price=0, idProduct="-"):
        self.__price = price
        self.__idProduct = idProduct

    def setPrice(self, price):
        self.__price = price

    def setIdProduct(self, idProduct):
        self.__idProduct = idProduct

    def getPrice(self):
        return self.__price

    def getIdProduct(self):
        return self.__idProduct
