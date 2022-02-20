<?php

include "Hardware.php";

class Memory extends Hardware
{
    private $frequency, $memorySize, $supportCuda;

    public function __construct($frequency = 0, $memorySize = 0, $supportCuda = false)
    {
        $this->frequency = $frequency;
        $this->memorySize = $memorySize;
        $this->supportCuda = $supportCuda;
    }

    public function setFrequency($frequency)
    {
        $this->frequency = $frequency;
    }

    public function setMemorySize($memorySize)
    {
        $this->memorySize = $memorySize;
    }

    public function setSupportCuda($supportCuda)
    {
        $this->supportCuda = $supportCuda;
    }

    public function getFrequency()
    {
        return $this->frequency;
    }

    public function getMemorySize()
    {
        return $this->memorySize;
    }

    public function getSupportCuda()
    {
        return $this->supportCuda;
    }
}