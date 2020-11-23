#include "logos/fox.h"
/* why a fox?, I don't know, just like it. Is gnu-linux no matter the distro, of course you can change this before compiling */
#define COLOR "\e[1;36m"
/* the default color is blue */
#define CONFIG \
{ \
   /* name            function                 cached */\
    { "",             get_title,               false }, \
    { "",             get_bar,                 false }, \
    { "OS: ",         get_os,                  true  }, \
    { "Host: ",       get_host,                true  }, \
    { "Kernel: ",     get_kernel,              true  }, \
    { "Uptime: ",     get_uptime,              false }, \
   /*{ "Battery: ",    get_battery_percentage,  false },*/ \
    SPACER \
   /* { "Packages: ",   get_packages_pacman,   false },*/ \
    { "Shell: ",      get_shell,             false }, \
    { "Resolution: ", get_resolution,        false }, \
    { "Terminal: ",   get_terminal,          false }, \
    SPACER \
    { "CPU: ",        get_cpu,                 true  }, \
    { "GPU: ",        get_gpu1,                true  }, \
    { "Memory: ",     get_memory,              false }, \
    SPACER \
    { "",             get_colors1,             false }, \
    { "",             get_colors2,             false }, \
}

#define CPU_CONFIG \
{ \
   REMOVE("(R)"), \
   REMOVE("(TM)"), \
   REMOVE("Dual-Core"), \
   REMOVE("Quad-Core"), \
   REMOVE("Six-Core"), \
   REMOVE("Eight-Core"), \
   REMOVE("Core"), \
   REMOVE("CPU"), \
}

#define GPU_CONFIG \
{ \
    REMOVE("Corporation"), \
}
