#include <arch.hpp>
#include <assert.hpp>
#include <vga.hpp>
#include <stdint.h>
#include <multiboot.h>

Vga terminal;
Arch architecture;

extern "C" void kernel_main(uint32_t addr) {
  architecture.Initialize();
  terminal.Clear();
  terminal << "Architecture: " << architecture.GetArchitecture() << "\n";
  volatile int zero = 0; int a = 3 / zero;
  terminal << a;
  while (true) {
  }
}
