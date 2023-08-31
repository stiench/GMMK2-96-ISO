
bool is_caps_lock_on(void) {
    led_t led_state = host_keyboard_led_state();
    return led_state.caps_lock;
}
