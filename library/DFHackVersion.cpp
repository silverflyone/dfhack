#include "DFHackVersion.h"
#include "git-describe.h"
#include "Export.h"
namespace DFHack {
    namespace Version {
        const char *dfhack_version()
        {
            return DFHACK_VERSION;
        }
        const char *df_version()
        {
            return DF_VERSION;
        }
        const char *dfhack_release()
        {
            return DFHACK_RELEASE;
        }
        const char *git_description()
        {
            return DFHACK_GIT_DESCRIPTION;
        }
    }
}
