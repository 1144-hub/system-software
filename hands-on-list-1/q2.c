/*
============================================================================
Name : Q2_infiniteloop.cpp
Author : Sarthak  goyal
Description : Write a simple program to execute in an infinite loop at the background. Go to /proc directory and
              identify all the process related information in the corresponding proc directory.
Date: 18th Aug, 2025.
*/
#include <unistd.h>
#include <stdio.h>

int main (){
	while(1){
		sleep(1);
	}
	return 0;
}
/*
Process:         a.out [8964]
Path:            /Users/USER/Documents/a.out
Load Address:    0x107dfb000
Identifier:      a.out
Version:         0
Code Type:       X86-64
Platform:        macOS
Parent Process:  zsh [600]

Date/Time:       2025-09-06 22:06:04.664 +0530
Launch Time:     2025-09-06 22:04:45.198 +0530
OS Version:      macOS 14.6.1 (23G93)
Report Version:  7
Analysis Tool:   /usr/bin/vmmap

Physical footprint:         348K
Physical footprint (peak):  352K
Idle exit:                  untracked
----

Virtual Memory Map of process 8964 (a.out)
Output report format:  2.4  -- 64-bit process
VM page size:  4096 bytes

==== Non-writable regions for process 8964
REGION TYPE                    START - END         [ VSIZE  RSDNT  DIRTY   SWAP] PRT/MAX SHRMOD PURGE    REGION DETAIL
__TEXT                      107dfb000-107dfc000    [    4K     4K     0K     0K] r-x/r-x SM=COW          /Users/USER/Documents/*/a.out
__DATA_CONST                107dfc000-107dfd000    [    4K     4K     4K     0K] r--/rw- SM=COW          /Users/USER/Documents/*/a.out
__LINKEDIT                  107dfd000-107dfe000    [    4K     4K     0K     0K] r--/r-- SM=COW          /Users/USER/Documents/*/a.out
shared memory               108201000-108205000    [   16K    16K    16K     0K] r--/r-- SM=SHM  
MALLOC metadata             108205000-108206000    [    4K     4K     4K     0K] r--/rwx SM=SHM          MallocHelperZone_0x108205000 zone structure
MALLOC guard page           10820a000-10820b000    [    4K     0K     0K     0K] ---/rwx SM=SHM  
MALLOC guard page           108214000-108215000    [    4K     0K     0K     0K] ---/rwx SM=SHM  
MALLOC guard page           108215000-108216000    [    4K     0K     0K     0K] ---/rwx SM=SHM  
MALLOC guard page           10821f000-108220000    [    4K     0K     0K     0K] ---/rwx SM=SHM  
MALLOC metadata             108220000-108221000    [    4K     4K     4K     0K] r--/rwx SM=PRV  
MALLOC metadata             108221000-108222000    [    4K     4K     4K     0K] r--/rwx SM=SHM          DefaultMallocZone_0x108221000 zone structure
STACK GUARD              7ff7b4105000-7ff7b7905000 [ 56.0M     0K     0K     0K] ---/rwx SM=NUL          stack guard for thread 0
__TEXT                   7ff815b29000-7ff815b6b000 [  264K   248K     0K     0K] r-x/r-x SM=COW          /usr/lib/libobjc.A.dylib
__TEXT                   7ff815b6b000-7ff815bfc000 [  580K   536K     0K     0K] r-x/r-x SM=COW          /usr/lib/dyld
__TEXT                   7ff815bfc000-7ff815c00000 [   16K    12K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_blocks.dylib
__TEXT                   7ff815c00000-7ff815c48000 [  288K   264K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libxpc.dylib
__TEXT                   7ff815c48000-7ff815c62000 [  104K   100K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_trace.dylib
__TEXT                   7ff815c62000-7ff815d19000 [  732K   528K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libcorecrypto.dylib
__TEXT                   7ff815d19000-7ff815d59000 [  256K   200K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_malloc.dylib
__TEXT                   7ff815d59000-7ff815da0000 [  284K   240K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libdispatch.dylib
__TEXT                   7ff815da0000-7ff815da3000 [   12K    12K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_featureflags.dylib
__TEXT                   7ff815da3000-7ff815e2b000 [  544K   504K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_c.dylib
__TEXT                   7ff815e2b000-7ff815ea6000 [  492K   312K     0K     0K] r-x/r-x SM=COW          /usr/lib/libc++.1.dylib
__TEXT                   7ff815ea6000-7ff815ebc000 [   88K    80K     0K     0K] r-x/r-x SM=COW          /usr/lib/libc++abi.dylib
__TEXT                   7ff815ebc000-7ff815ef7000 [  236K   188K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_kernel.dylib
__TEXT                   7ff815ef7000-7ff815f03000 [   48K    44K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_pthread.dylib
__TEXT                   7ff815f03000-7ff815f28000 [  148K   132K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libdyld.dylib
__TEXT                   7ff815f28000-7ff815f33000 [   44K    36K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_platform.dylib
__TEXT                   7ff815f33000-7ff815f5e000 [  172K   156K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_info.dylib
__TEXT                   7ff819158000-7ff819163000 [   44K    28K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_darwin.dylib
__TEXT                   7ff8195a4000-7ff8195b4000 [   64K    60K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_notify.dylib
__TEXT                   7ff81b514000-7ff81b52d000 [  100K    76K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_networkextension.dylib
__TEXT                   7ff81b5a0000-7ff81b5b7000 [   92K    92K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_asl.dylib
__TEXT                   7ff81d145000-7ff81d14d000 [   32K    32K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_symptoms.dylib
__TEXT                   7ff82049b000-7ff8204c4000 [  164K   144K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_containermanager.dylib
__TEXT                   7ff821470000-7ff821474000 [   16K    16K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_configuration.dylib
__TEXT                   7ff821474000-7ff82147a000 [   24K    24K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_sandbox.dylib
__TEXT                   7ff822470000-7ff822473000 [   12K    12K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libquarantine.dylib
__TEXT                   7ff822d92000-7ff822d98000 [   24K    24K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_coreservices.dylib
__TEXT                   7ff8230d6000-7ff82313a000 [  400K   320K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_m.dylib
__TEXT                   7ff82313b000-7ff823141000 [   24K    24K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libmacho.dylib
__TEXT                   7ff82315a000-7ff823166000 [   48K    48K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libcommonCrypto.dylib
__TEXT                   7ff823166000-7ff82316f000 [   36K    32K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libunwind.dylib
__TEXT                   7ff82316f000-7ff823177000 [   32K    16K     0K     0K] r-x/r-x SM=COW          /usr/lib/liboah.dylib
__TEXT                   7ff823177000-7ff823182000 [   44K    44K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libcopyfile.dylib
__TEXT                   7ff823182000-7ff82318a000 [   32K    20K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libcompiler_rt.dylib
__TEXT                   7ff82318a000-7ff82318f000 [   20K    20K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_collections.dylib
__TEXT                   7ff82318f000-7ff823192000 [   12K    12K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_secinit.dylib
__TEXT                   7ff823192000-7ff823194000 [    8K     8K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libremovefile.dylib
__TEXT                   7ff823194000-7ff823195000 [    4K     4K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libkeymgr.dylib
__TEXT                   7ff823195000-7ff82319e000 [   36K    36K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_dnssd.dylib
__TEXT                   7ff82319e000-7ff8231a4000 [   24K    20K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libcache.dylib
__TEXT                   7ff8231a4000-7ff8231a6000 [    8K     8K     0K     0K] r-x/r-x SM=COW          /usr/lib/libSystem.B.dylib
__OBJC_RO                7ff835a0a568-7ff83a1ead70 [ 71.9M  31.5M     0K     0K] r-x/r-x SM=COW          /usr/lib/libobjc.A.dylib
__DATA_CONST             7ff855ac1000-7ff855ac2c50 [    7K     7K     0K     0K] r--/rw- SM=COW          /usr/lib/libobjc.A.dylib
__DATA_CONST             7ff855ac2c50-7ff855ac8310 [   22K    18K     0K     0K] r--/rw- SM=COW          /usr/lib/dyld
__DATA_CONST             7ff855ac8310-7ff855ac8850 [  1344   1344     0K     0K] r--/rw- SM=COW          /usr/lib/system/libsystem_blocks.dylib
__DATA_CONST             7ff855ac8850-7ff855aced28 [   25K    25K     0K     0K] r--/rw- SM=COW          /usr/lib/system/libxpc.dylib
__DATA_CONST             7ff855aced30-7ff855ad04e0 [    6K     6K     0K     0K] r--/rw- SM=COW          /usr/lib/system/libsystem_trace.dylib
__DATA_CONST             7ff855ad04e0-7ff855ad3648 [   12K    12K     0K     0K] r--/rw- SM=COW          /usr/lib/system/libcorecrypto.dylib
__DATA_CONST             7ff855ad3650-7ff855ad4210 [  3008   3008     0K     0K] r--/rw- SM=COW          /usr/lib/system/libsystem_malloc.dylib
__DATA_CONST             7ff855ad4240-7ff855ae8650 [   81K    33K     0K     0K] r--/rw- SM=COW          /usr/lib/system/libdispatch.dylib
__DATA_CONST             7ff855ae8650-7ff855ae8810 [   448    448     0K     0K] r--/rw- SM=COW          /usr/lib/system/libsystem_featureflags.dylib
__DATA_CONST             7ff855ae8810-7ff855aea9d0 [    8K     8K     0K     0K] r--/rw- SM=COW          /usr/lib/system/libsystem_c.dylib
__DATA_CONST             7ff855aea9d0-7ff855aed2b8 [   10K     6K     0K     0K] r--/rw- SM=COW          /usr/lib/libc++.1.dylib
__DATA_CONST             7ff855aed2c0-7ff855af0a30 [   14K    14K     0K     0K] r--/rw- SM=COW          /usr/lib/libc++abi.dylib
__DATA_CONST             7ff855af0a30-7ff855af2ea8 [    9K     9K     0K     0K] r--/rw- SM=COW          /usr/lib/system/libsystem_kernel.dylib
__DATA_CONST             7ff855af2ea8-7ff855af3100 [   600    600     0K     0K] r--/rw- SM=COW          /usr/lib/system/libsystem_pthread.dylib
__DATA_CONST             7ff855af3100-7ff855af4148 [    4K     4K     0K     0K] r--/rw- SM=COW          /usr/lib/system/libdyld.dylib
__DATA_CONST             7ff855af4150-7ff855af5748 [    5K     5K     0K     0K] r--/rw- SM=COW          /usr/lib/system/libsystem_info.dylib
__DATA_CONST             7ff855fb3b10-7ff855fb68f0 [   11K     4K     0K     0K] r--/rw- SM=COW          /usr/lib/system/libsystem_darwin.dylib
__DATA_CONST             7ff855fdd688-7ff855fddb48 [  1216   1216     0K     0K] r--/rw- SM=COW          /usr/lib/system/libsystem_notify.dylib
__DATA_CONST             7ff856094b90-7ff856095e98 [    5K     5K     0K     0K] r--/rw- SM=COW          /usr/lib/system/libsystem_networkextension.dylib
__DATA_CONST             7ff8560ffcb8-7ff856100b20 [  3688   3688     0K     0K] r--/rw- SM=COW          /usr/lib/system/libsystem_asl.dylib
__DATA_CONST             7ff8561c9090-7ff8561c9510 [  1152   1152     0K     0K] r--/rw- SM=COW          /usr/lib/system/libsystem_symptoms.dylib
__DATA_CONST             7ff8564376b0-7ff856437e70 [  1984   1984     0K     0K] r--/rw- SM=COW          /usr/lib/system/libmacho.dylib
__DATA_CONST             7ff856437fb8-7ff8564381f0 [   568    568     0K     0K] r--/rw- SM=COW          /usr/lib/system/libunwind.dylib
__DATA_CONST             7ff8564381f0-7ff856438578 [   904    904     0K     0K] r--/rw- SM=COW          /usr/lib/liboah.dylib
__DATA_CONST             7ff856438580-7ff856438db8 [  2104   2104     0K     0K] r--/rw- SM=COW          /usr/lib/system/libcopyfile.dylib
__DATA_CONST             7ff856438db8-7ff856438e38 [   128    128     0K     0K] r--/rw- SM=COW          /usr/lib/system/libcompiler_rt.dylib
__DATA_CONST             7ff856438e38-7ff856438f90 [   344    344     0K     0K] r--/rw- SM=COW          /usr/lib/system/libsystem_collections.dylib
__DATA_CONST             7ff856438f90-7ff8564392b0 [   800    800     0K     0K] r--/rw- SM=COW          /usr/lib/system/libsystem_secinit.dylib
__DATA_CONST             7ff8564392b0-7ff856439438 [   392    392     0K     0K] r--/rw- SM=COW          /usr/lib/system/libremovefile.dylib
__DATA_CONST             7ff856439438-7ff8564394a8 [   112    112     0K     0K] r--/rw- SM=COW          /usr/lib/system/libkeymgr.dylib
__DATA_CONST             7ff8564394b0-7ff856439648 [   408    408     0K     0K] r--/rw- SM=COW          /usr/lib/system/libcache.dylib
__LINKEDIT               7ff895ac1000-7ff8a0ed9000 [180.1M  18.5M     0K     0K] r--/r-- SM=COW          dyld shared cache combined __LINKEDIT
__TEXT                   7ffc2f32b000-7ffc2f32f000 [   16K     4K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_darwindirectory.dylib
__TEXT                   7ffc2f32f000-7ffc2f332000 [   12K     8K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_eligibility.dylib
__TEXT                   7ffc2f332000-7ffc2f335000 [   12K    12K     0K     0K] r-x/r-x SM=COW          /usr/lib/system/libsystem_sanitizers.dylib
unused __TEXT            7ffda0bbd000-7ffda0bbe000 [    4K     4K     4K     0K] r--/r-- SM=COW          on dirty page  unused system shared lib __DATA
shared memory            7fffffe00000-7fffffe01000 [    4K     4K     4K     0K] r--/r-- SM=SHM  
shared memory            7fffffe63000-7fffffe64000 [    4K     4K     4K     0K] r-x/r-x SM=SHM  

==== Writable regions for process 8964
REGION TYPE                    START - END         [ VSIZE  RSDNT  DIRTY   SWAP] PRT/MAX SHRMOD PURGE    REGION DETAIL
Kernel Alloc Once           107dfe000-107e00000    [    8K     4K     4K     0K] rw-/rwx SM=PRV  
MALLOC metadata             108206000-10820a000    [   16K     4K     4K     0K] rw-/rwx SM=SHM  
MALLOC metadata             10820b000-108214000    [   36K    32K    32K     0K] rw-/rwx SM=SHM  
MALLOC metadata             108216000-10821f000    [   36K    32K    32K     0K] rw-/rwx SM=SHM  
MALLOC metadata             108222000-108229000    [   28K    28K    12K     0K] rw-/rwx SM=SHM  
VM_ALLOCATE                 108300000-108340000    [  256K    28K    28K     0K] rw-/rwx SM=PRV  
MALLOC_NANO              600000000000-600020000000 [512.0M    48K    48K     0K] rw-/rwx SM=PRV          DefaultMallocZone_0x108221000
MALLOC_TINY              7f7f25700000-7f7f25800000 [ 1024K    12K    12K     0K] rw-/rwx SM=PRV          MallocHelperZone_0x108205000
MALLOC_SMALL             7f7f25800000-7f7f26000000 [ 8192K     8K     8K     0K] rw-/rwx SM=PRV          MallocHelperZone_0x108205000
Stack                    7ff7b7905000-7ff7b8105000 [ 8192K    20K    20K     0K] rw-/rwx SM=PRV          thread 0
__DATA                   7ff8576d5000-7ff8576d96c0 [   18K    14K    14K     0K] rw-/rwx SM=COW          /usr/lib/libobjc.A.dylib
__DATA                   7ff8576d96c0-7ff8576dc380 [   11K     7K     7K     0K] rw-/rwx SM=COW          /usr/lib/dyld
__DATA                   7ff8576dc380-7ff8576dc3b0 [    48     48     48     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_blocks.dylib
__DATA                   7ff8576dc3b0-7ff8576dd048 [  3224   3224   3224     0K] rw-/rwx SM=COW          /usr/lib/system/libxpc.dylib
unused __DATA            7ff8576dd048-7ff8576dd050 [     8      8      8     0K] rw-/rwx SM=COW          on dirty page  unused system shared lib __DATA
__DATA                   7ff8576dd050-7ff8576dd470 [  1056   1056   1056     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_trace.dylib
__DATA                   7ff8576dd470-7ff8576e54b0 [   32K    19K    11K     0K] rw-/rwx SM=COW          /usr/lib/system/libcorecrypto.dylib
__DATA                   7ff8576e9000-7ff8576f2280 [   37K     9K     5K     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_malloc.dylib
__DATA                   7ff8576f2280-7ff8576f3568 [    5K     5K   3456     0K] rw-/rwx SM=COW          /usr/lib/system/libdispatch.dylib
__DATA                   7ff8576f3570-7ff8576f35a1 [    49     49     0K     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_featureflags.dylib
__DATA                   7ff8576f35b0-7ff8576f64d8 [   12K    12K     5K     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_c.dylib
unused __DATA            7ff8576f64d8-7ff8576f6500 [    40     40     40     0K] rw-/rwx SM=COW          on dirty page  unused system shared lib __DATA
__DATA                   7ff8576f6500-7ff8576fe870 [   33K    17K     5K     0K] rw-/rwx SM=COW          /usr/lib/libc++.1.dylib
__DATA                   7ff8576fe870-7ff8576fec08 [   920    920    920     0K] rw-/rwx SM=COW          /usr/lib/libc++abi.dylib
unused __DATA            7ff8576fec08-7ff8576fec10 [     8      8      8     0K] rw-/rwx SM=COW          on dirty page  unused system shared lib __DATA
__DATA                   7ff8576fec10-7ff8576feeb0 [   672    672    672     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_kernel.dylib
__DATA                   7ff8576feeb0-7ff8576fef26 [   118    118    118     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_pthread.dylib
unused __DATA            7ff8576fef26-7ff8576fef30 [    10     10     10     0K] rw-/rwx SM=COW          on dirty page  unused system shared lib __DATA
__DATA                   7ff8576fef30-7ff8576ff028 [   248    248    208     0K] rw-/rwx SM=COW          /usr/lib/system/libdyld.dylib
__DATA                   7ff8576ff028-7ff8576ff068 [    64     64     0K     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_platform.dylib
__DATA                   7ff8576ff070-7ff8576ffe08 [  3480   3480     0K     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_info.dylib
__DATA                   7ff85780df38-7ff85780df48 [    16     16     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_darwin.dylib
__DATA                   7ff857816f40-7ff857816f91 [    81     81     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_notify.dylib
__DATA                   7ff8578d9ba0-7ff8578da2c0 [  1824   1824     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_networkextension.dylib
__DATA                   7ff8578da820-7ff8578da930 [   272    272     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_asl.dylib
__DATA                   7ff85792f740-7ff85792f780 [    64     64     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_symptoms.dylib
__DATA                   7ff857d27d00-7ff857d2a658 [   10K    10K     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_containermanager.dylib
__DATA                   7ff857f2e970-7ff857f2ef31 [  1473   1473     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_configuration.dylib
__DATA                   7ff857f2ef40-7ff857f2f1f8 [   696    696     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_sandbox.dylib
__DATA                   7ff857f9d7a0-7ff857f9d900 [   352    352     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libquarantine.dylib
__DATA                   7ff857fabfa0-7ff857facc98 [  3320   3320     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_coreservices.dylib
__DATA                   7ff857ffac64-7ff857ffac68 [     4      4     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_m.dylib
__DATA                   7ff857ffada0-7ff857ffc330 [    5K     5K     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libcommonCrypto.dylib
__DATA                   7ff857ffc330-7ff857ffcd31 [  2561   2561     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libunwind.dylib
__DATA                   7ff857ffcd40-7ff857ffdd60 [    4K     4K     0K     0K] rw-/rw- SM=COW          /usr/lib/liboah.dylib
__DATA                   7ff857ffdd60-7ff857ffdd70 [    16     16     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libcopyfile.dylib
__DATA                   7ff857ffdd70-7ff857ffed70 [    4K     4K     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libcompiler_rt.dylib
__DATA                   7ff857ffed70-7ff857ffedb0 [    64     64     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_secinit.dylib
__DATA                   7ff857ffedb0-7ff857fff038 [   648    648     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_dnssd.dylib
__DATA                   7ff857fff038-7ff857fff3f8 [   960    960     0K     0K] rw-/rw- SM=COW          /usr/lib/libSystem.B.dylib
__DATA_CONST             7ff858813660-7ff858813890 [   560    560     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_platform.dylib
__DATA_CONST             7ff858d411c0-7ff858d411e0 [    32     32     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_m.dylib
unused __DATA            7ff859217000-7ff859217a40 [  2624   2624   2624     0K] rw-/rwx SM=COW          on dirty page  unused system shared lib __DATA
__OBJC_RW                7ff859217a40-7ff859400000 [ 1953K  1333K   1472     0K] rw-/rwx SM=COW          /usr/lib/libobjc.A.dylib
__OBJC_RW                7ff859400000-7ff85943dcc0 [  247K    75K   3264     0K] rw-/rwx SM=COW          /usr/lib/libobjc.A.dylib
__DATA_DIRTY             7ff85943dcc0-7ff859440b50 [   12K    12K    12K     0K] rw-/rwx SM=COW          /usr/lib/libobjc.A.dylib
unused __DATA            7ff859440b50-7ff859440b80 [    48     48     48     0K] rw-/rwx SM=COW          on dirty page  unused system shared lib __DATA
__DATA_DIRTY             7ff859440b80-7ff8594426e0 [    7K     7K     7K     0K] rw-/rwx SM=COW          /usr/lib/dyld
__DATA_DIRTY             7ff8594426e0-7ff8594428d8 [   504    504    504     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_blocks.dylib
__DATA_DIRTY             7ff8594428d8-7ff859443418 [  2880   2880   2880     0K] rw-/rwx SM=COW          /usr/lib/system/libxpc.dylib
unused __DATA            7ff859443418-7ff859443420 [     8      8      8     0K] rw-/rwx SM=COW          on dirty page  unused system shared lib __DATA
__DATA_DIRTY             7ff859443420-7ff8594438b0 [  1168   1168   1168     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_trace.dylib
__DATA_DIRTY             7ff8594438b0-7ff859443988 [   216    216    216     0K] rw-/rwx SM=COW          /usr/lib/system/libcorecrypto.dylib
unused __DATA            7ff859443988-7ff859443990 [     8      8      8     0K] rw-/rwx SM=COW          on dirty page  unused system shared lib __DATA
__DATA_DIRTY             7ff859443990-7ff859443ba0 [   528    528    528     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_malloc.dylib
unused __DATA            7ff859443ba0-7ff859443bc0 [    32     32     32     0K] rw-/rwx SM=COW          on dirty page  unused system shared lib __DATA
__DATA_DIRTY             7ff859443bc0-7ff859447610 [   15K    15K    11K     0K] rw-/rwx SM=COW          /usr/lib/system/libdispatch.dylib
__DATA_DIRTY             7ff859447610-7ff859447620 [    16     16     16     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_featureflags.dylib
__DATA_DIRTY             7ff859447620-7ff85944a1f8 [   11K    11K     7K     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_c.dylib
unused __DATA            7ff85944a1f8-7ff85944a200 [     8      8      8     0K] rw-/rwx SM=COW          on dirty page  unused system shared lib __DATA
__DATA_DIRTY             7ff85944a200-7ff85944b4e8 [    5K     5K     5K     0K] rw-/rwx SM=COW          /usr/lib/libc++.1.dylib
__DATA_DIRTY             7ff85944b4e8-7ff85944b550 [   104    104    104     0K] rw-/rwx SM=COW          /usr/lib/libc++abi.dylib
__DATA_DIRTY             7ff85944b550-7ff85944bc48 [  1784   1784   1784     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_kernel.dylib
unused __DATA            7ff85944bc48-7ff85944bc50 [     8      8      8     0K] rw-/rwx SM=COW          on dirty page  unused system shared lib __DATA
__DATA_DIRTY             7ff85944bc50-7ff85944d500 [    6K     6K     6K     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_pthread.dylib
__DATA_DIRTY             7ff85944d500-7ff85944d520 [    32     32     32     0K] rw-/rwx SM=COW          /usr/lib/system/libdyld.dylib
__DATA_DIRTY             7ff85944d520-7ff85944d59c [   124    124    124     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_platform.dylib
unused __DATA            7ff85944d59c-7ff85944d5a0 [     4      4      4     0K] rw-/rwx SM=COW          on dirty page  unused system shared lib __DATA
__DATA_DIRTY             7ff85944d5a0-7ff85944d860 [   704    704    704     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_info.dylib
unused __DATA            7ff85944d860-7ff85944e000 [  1952   1952   1952     0K] rw-/rwx SM=COW          on dirty page  unused system shared lib __DATA
unused __DATA            7ff859462000-7ff859462160 [   352    352    352     0K] rw-/rwx SM=COW          on dirty page  unused system shared lib __DATA
__DATA_DIRTY             7ff859462160-7ff859462190 [    48     48     48     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_darwin.dylib
unused __DATA            7ff859462190-7ff859463000 [  3696   3696   3696     0K] rw-/rwx SM=COW          on dirty page  unused system shared lib __DATA
__DATA_DIRTY             7ff859465300-7ff859465308 [     8      8     0K     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_notify.dylib
__DATA_DIRTY             7ff85948fcb0-7ff85948fd10 [    96     96     0K     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_networkextension.dylib
__DATA_DIRTY             7ff859491560-7ff8594916d4 [   372    372     0K     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_asl.dylib
__DATA_DIRTY             7ff85949c170-7ff85949c180 [    16     16     0K     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_symptoms.dylib
__DATA_DIRTY             7ff8594d0d58-7ff8594d0e18 [   192    192     0K     0K] rw-/rwx SM=COW          /usr/lib/system/libsystem_m.dylib
__DATA                   7ffc57d4a848-7ffc57d4ad50 [  1288   1288     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_darwindirectory.dylib
__DATA                   7ffc57d4ad50-7ffc57d4af58 [   520    520     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_eligibility.dylib
__DATA                   7ffc57d4af60-7ffc57d4b530 [  1488   1488     0K     0K] rw-/rw- SM=COW          /usr/lib/system/libsystem_sanitizers.dylib

==== Legend
SM=sharing mode:  
	COW=copy_on_write PRV=private NUL=empty ALI=aliased 
	SHM=shared ZER=zero_filled S/A=shared_alias
PURGE=purgeable mode:  
	V=volatile N=nonvolatile E=empty   otherwise is unpurgeable

==== Summary for process 8964
ReadOnly portion of Libraries: Total=185.6M resident=23.1M(12%) swapped_out_or_unallocated=162.5M(88%)
Writable regions: Total=529.4M written=120K(0%) resident=216K(0%) swapped_out=0K(0%) unallocated=529.2M(100%)

                                VIRTUAL RESIDENT    DIRTY  SWAPPED VOLATILE   NONVOL    EMPTY   REGION 
REGION TYPE                        SIZE     SIZE     SIZE     SIZE     SIZE     SIZE     SIZE    COUNT (non-coalesced) 
===========                     ======= ========    =====  ======= ========   ======    =====  ======= 
Kernel Alloc Once                    8K       4K       4K       0K       0K       0K       0K        1 
MALLOC guard page                   16K       0K       0K       0K       0K       0K       0K        4 
MALLOC metadata                    128K     108K      92K       0K       0K       0K       0K        7 
MALLOC_NANO                      512.0M      48K      48K       0K       0K       0K       0K        1         see MALLOC ZONE table below
MALLOC_SMALL                      8192K       8K       8K       0K       0K       0K       0K        1         see MALLOC ZONE table below
MALLOC_TINY                       1024K      12K      12K       0K       0K       0K       0K        1         see MALLOC ZONE table below
STACK GUARD                       56.0M       0K       0K       0K       0K       0K       0K        1 
Stack                             8192K      20K      20K       0K       0K       0K       0K        1 
VM_ALLOCATE                        256K      28K      28K       0K       0K       0K       0K        1 
__DATA                             196K     130K      56K       0K       0K       0K       0K       39 
__DATA_CONST                       244K     181K       4K       0K       0K       0K       0K       34 
__DATA_DIRTY                        64K      64K      55K       0K       0K       0K       0K       23 
__LINKEDIT                       180.1M    18.5M       0K       0K       0K       0K       0K        2 
__OBJC_RO                         71.9M    31.5M       0K       0K       0K       0K       0K        1 
__OBJC_RW                         2201K    1409K       5K       0K       0K       0K       0K        2 
__TEXT                            5652K    4740K       0K       0K       0K       0K       0K       45 
shared memory                       24K      24K      24K       0K       0K       0K       0K        3 
unused but dirty shlib __DATA       13K      13K      13K       0K       0K       0K       0K       16 
===========                     ======= ========    =====  ======= ========   ======    =====  ======= 
TOTAL                            845.6M    56.6M     368K       0K       0K       0K       0K      183 

                                 VIRTUAL   RESIDENT      DIRTY    SWAPPED ALLOCATION      BYTES DIRTY+SWAP          REGION
MALLOC ZONE                         SIZE       SIZE       SIZE       SIZE      COUNT  ALLOCATED  FRAG SIZE  % FRAG   COUNT
===========                      =======  =========  =========  =========  =========  =========  =========  ======  ======
DefaultMallocZone_0x108221000     512.0M        48K        48K         0K        166         6K        42K     88%       1
MallocHelperZone_0x108205000       9216K        20K        20K         0K          7       2880        17K     86%       2
===========                      =======  =========  =========  =========  =========  =========  =========  ======  ======
TOTAL                             521.0M        68K        68K         0K        173         9K        59K     88%       3

ronakgoyal@Administrators-MacBook-Pro handson1 % 

*/