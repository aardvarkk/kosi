#pragma once

#include "types.hpp"

void set_mode(RunMode mode);
void to_offline(unsigned long now);
void to_online(unsigned long now);
void process_online();
void process_offline();