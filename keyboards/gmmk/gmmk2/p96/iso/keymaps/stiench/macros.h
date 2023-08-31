
enum custom_keycodes {
  CS_VS = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
  switch (keycode) {
    case CS_VS: 
      if (record->event.pressed) {
        SEND_STRING("../");
      }
  }
  return true;
}
