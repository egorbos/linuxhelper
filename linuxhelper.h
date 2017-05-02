/// Copyright 2017 Sergei Egorov
///
/// Licensed under the Apache License, Version 2.0 (the "License");
/// you may not use this file except in compliance with the License.
/// You may obtain a copy of the License at
///
/// http://www.apache.org/licenses/LICENSE-2.0
///
/// Unless required by applicable law or agreed to in writing, software
/// distributed under the License is distributed on an "AS IS" BASIS,
/// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
/// See the License for the specific language governing permissions and
/// limitations under the License.

#ifndef linuxhelper_h
#define linuxhelper_h

#ifdef __cplusplus
extern "C" {
#endif
    
#define _GNU_SOURCE
#include <pthread.h>
#include <unistd.h>
#include <sys/types.h>
    
/*Set pthread name*/
int linux_pthread_setname_np(pthread_t thread, const char *name)
{
    return pthread_setname_np(thread, name);
}

/*Get pthread name*/
int linux_pthread_getname_np(pthread_t thread, char *name, size_t len)
{
    return pthread_getname_np(thread, name, len);
}
    
#ifdef __cplusplus
}
#endif

#endif /* linuxhelper_h */
