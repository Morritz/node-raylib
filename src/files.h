#ifndef NODE_RAYLIB_FILES_H
#define NODE_RAYLIB_FILES_H

#include <string>
#include <napi.h>
#include <raylib.h>
#include "lib/index.h"

void node_raylib_init_files(Napi::Env& env, Napi::Object& exports) {
  AddFunction(env, exports, "FileExists", FileExists);
  AddFunction(env, exports, "IsFileExtension", IsFileExtension);
  AddFunction(env, exports, "GetExtension", GetExtension);
  AddFunction(env, exports, "GetFileName", GetFileName);
  AddFunction(env, exports, "GetFileNameWithoutExt", GetFileNameWithoutExt);
  AddFunction(env, exports, "GetDirectoryPath", GetDirectoryPath);
  // RLAPI const char *GetWorkingDirectory(void);                      // Get current working directory (uses static string)
  // RLAPI char **GetDirectoryFiles(const char *dirPath, int *count);  // Get filenames in a directory path (memory should be freed)
  AddFunction(env, exports, "ClearDirectoryFiles", ClearDirectoryFiles);
  AddFunction(env, exports, "ChangeDirectory", ChangeDirectory);
  AddFunction(env, exports, "IsFileDropped", IsFileDropped);
  // RLAPI char **GetDroppedFiles(int *count);                         // Get dropped files names (memory should be freed)
  AddFunction(env, exports, "ClearDroppedFiles", ClearDroppedFiles);
  // RLAPI long GetFileModTime(const char *fileName);                  // Get file modification time (last write time)
}

#endif
