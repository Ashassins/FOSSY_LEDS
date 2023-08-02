// Module imports
const microzig = @import("microzig");

// Declare constants to alias items from the modules
const rp2040 = microzig.hal;
const Pins = microzig.hal.pins.Pins;
const time = rp2040.time;

//// Could also do
// const rp2040 = @import("microzig").microzig.hal;
//// if we only wanted 1 item

// This will setup what our pinconfig struct looks like thanks to compile time code
const pin_config = rp2040.pins.GlobalConfiguration{
    .GPIO25 = .{
        .name = "my_led_thingy", // Can change this to anything we want
        .direction = .out,
    },
};

// Create the pin config type so we can pass it around to functions
const PinConfig = Pins(pin_config);

// Function signature, the ! means that the function can fail
// Similar to returning null in Java, but now the caller actually knows
pub fn main() !void {
    // Apply the pin config to setup GPIO how we want it
    const pins = pin_config.apply();
    while (true) {
        shortBlink(pins);
        shortBlink(pins);
        longBlink(pins);
    }
}

fn shortBlink(pins: PinConfig) void {
    pins.my_led_thingy.toggle();
    time.sleep_ms(50);
}

// These can't fail so no !
fn longBlink(pins: PinConfig) void {
    pins.my_led_thingy.toggle();
    time.sleep_ms(500);
}