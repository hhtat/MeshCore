#pragma once

#include <Arduino.h>
#include <helpers/ESP32Board.h>

class MeshishiBoard : public ESP32Board {
public:
  MeshishiBoard() { }

  const char* getManufacturerName() const override {
    return "Meshishi";
  }
};
