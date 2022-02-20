<?php

include "Product.php";

class Hardware extends Product
{
    private $brand, $model;

    public function __construct($brand = "-", $model = "-")
    {
        $this->brand = $brand;
        $this->model = $model;
    }

    public function setBrand($brand)
    {
        $this->brand = $brand;
    }

    public function setModel($model)
    {
        $this->model = $model;
    }

    public function getBrand()
    {
        return $this->brand;
    }

    public function getModel()
    {
        return $this->model;
    }
}