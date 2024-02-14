# CMakeList.txt : CMake project for Project01, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("Project01")

find_package(imgui CONFIG REQUIRED)

# Add source to this project's executable.
add_executable (Project01 "src/Project01.cpp" "src/Project01.h" "external/imgui/imgui_impl_dx12.cpp" "external/imgui/imgui_impl_dx12.h" "external/imgui/imgui_impl_win32.h" "external/imgui/imgui_impl_win32.cpp" "src/PasswordVerification/PasswordVerificationHandler.h" "src/PasswordVerification/PasswordVerificationAbstractHandler.h" "src/PasswordVerification/PasswordVerificationAbstractHandler.cpp" "src/PasswordVerification/LengthVerificator.h" "src/PasswordVerification/UppercaseLetterVerificator.h" "src/PasswordVerification/LowercaseLetterVerificator.h" "src/PasswordVerification/DigitVerificator.h" "src/PasswordVerification/SpecialCharVerificator.h" "src/PasswordVerification/StrongPasswordVerificator.h")

target_link_libraries(Project01 PRIVATE imgui::imgui d3d12.lib dxgi.lib)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Project01 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.