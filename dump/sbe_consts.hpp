#pragma once
#include <cstdint>

namespace openpower::dump::SBE
{
// Dump type to the sbe_dump chipop
constexpr auto SBE_DUMP_TYPE_HOSTBOOT = 0x5;
constexpr auto SBE_DUMP_TYPE_HARDWARE = 0x1;
constexpr auto SBE_DUMP_TYPE_PERFORMANCE = 0x3;

// SBE dump types
constexpr auto SBE_DUMP_TYPE_SBE = 0xA;
constexpr auto SBE_DUMP_TYPE_MSBE = 0xB;

// Clock state requested
// Collect the dump with clocks on
constexpr auto SBE_CLOCK_ON = 0x1;

// Collect the dumps with clock off
constexpr auto SBE_CLOCK_OFF = 0x2;

// Dump command class
constexpr auto SBEFIFO_CMD_CLASS_DUMP = 0xAA00;

// Get dump method
constexpr auto SBEFIFO_CMD_GET_DUMP = 0x01;

// Stop instruction command class
constexpr auto SBEFIFO_CMD_CLASS_INSTRUCTION = 0xA700;

// Stop instruction method
constexpr auto SBEFIFO_CMD_CONTROL_INSN = 0x01;

// FFDC Format details
constexpr uint8_t FFDC_FORMAT_SUBTYPE = 0xCB;
constexpr uint8_t FFDC_FORMAT_VERSION = 0x01;
} // namespace openpower::dump::SBE
