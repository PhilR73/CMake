/* Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
   file Copyright.txt or https://cmake.org/licensing for details.  */
#ifndef cmQtAutoGeneratorCommon_h
#define cmQtAutoGeneratorCommon_h

#include <cmConfigure.h> // IWYU pragma: keep
#include <string>
#include <vector>

class cmGeneratorTarget;
class cmLocalGenerator;

class cmQtAutoGeneratorCommon
{
  // - Types and statics
public:
  static const char* listSep;

public:
  /// @brief Reads the resource files list from from a .qrc file
  /// @arg fileName Must be the absolute path of the .qrc file
  /// @return True if the rcc file was successfully parsed
  static bool RccListInputs(const std::string& qtMajorVersion,
                            const std::string& rccCommand,
                            const std::string& fileName,
                            std::vector<std::string>& files);
};

#endif
