<?php

include "Memory.php";

$memori = new Memory();
$memori->setIdProduct("00001");
$memori->setPrice(2000000);
$memori->setBrand("ASES");
$memori->setModel("Memory");
$memori->setMemorySize(1000);
$memori->setFrequency(1000);
$memori->setSupportCuda(true);

echo ("================================<br>");
echo ("DATA MEMORI : <br>");
echo ("================================<br>");
echo ("- Id Product   : " . $memori->getIdProduct()) . "<br>";
echo ("- Price        : Rp." . $memori->getPrice())  . "<br>";
echo ("- Brand        : " . $memori->getBrand())  . "<br>";
echo ("- Model        : " . $memori->getModel())  . "<br>";
echo ("- Memory Size  : " . $memori->getMemorySize())  . "<br>";
echo ("- Frequency    : " . $memori->getFrequency())  . "<br>";
echo ("- Support Cuda : ");
if ($memori->getSupportCuda()) {
    echo ("YES<br>");
} else {
    echo ("NO<br>");
}
echo ("================================<br>");
