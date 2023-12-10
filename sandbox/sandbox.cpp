

uint8_t CRCC_CalculateCRC8_hook(const uint8 *data, uint32 size, Crcc_ConfigId_t cfgId, bool_t isFirstCall,
                                uint8 *result) {
  uint8_t start_value = 0x00;
  (void)cfgId;

  if (isFirstCall == FALSE) {
    start_value = *result;
  }

  *result = CRC8_SAE_J1850_Calculate(start_value, data, size);
  return CRCC_OK;
}

uint8_t CRCC_CalculateCRC8_hook(const uint8 *data, uint32 size, Crcc_ConfigId_t cfgId, bool_t isFirstCall,
                                uint8 *result, const uint8_t argument) {}

// AllowShortEnumsOnASingleLine: true
enum gpiod_id { a };
