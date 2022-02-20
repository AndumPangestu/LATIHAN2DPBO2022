package latihan2.java;

public class Product {

    private int price;
    private String idProduct;

    public Product() {
    }

    public Product(int price, String idProduct) {
        this.setPrice(price);
        this.setIdProduct(idProduct);
    }

    public int getPrice() {
        return price;
    }

    public void setPrice(int price) {
        this.price = price;
    }

    public String getIdProduct() {
        return idProduct;
    }

    public void setIdProduct(String idProduct) {
        this.idProduct = idProduct;
    }

}