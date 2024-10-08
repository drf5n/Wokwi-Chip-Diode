#include "wokwi-api.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct {
  pin_t ANODE;
  pin_t CATHODE;
} chip_data_t;

void anode_change(void *user_data, pin_t pin, uint32_t value)
{
  chip_data_t *chip = (chip_data_t*)user_data;
  uint8_t state = pin_read(chip->ANODE);
  if (!state) {
    pin_mode(chip->CATHODE, OUTPUT);
    pin_write(chip->CATHODE, LOW);
  } else {
    pin_mode(chip->CATHODE, INPUT);
  }
}

void chip_init()
{
  chip_data_t *chip = (chip_data_t*)malloc(sizeof(chip_data_t));
  chip->ANODE = pin_init("ANODE", INPUT_PULLUP);
  chip->CATHODE = pin_init("CATHODE", INPUT);

  const pin_watch_config_t anode_watch = {
    .edge = BOTH,
    .pin_change = anode_change,
    .user_data = chip,
  };

  pin_watch(chip->ANODE, &anode_watch);
}