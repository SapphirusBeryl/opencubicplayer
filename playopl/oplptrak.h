#ifndef _OPLPTRAK_H
#define _OPLPTRAK_H 1

void __attribute__ ((visibility ("internal"))) oplTrkSetup (struct cpifaceSessionAPI_t *cpifaceSession, CPlayer *p);
void __attribute__ ((visibility ("internal"))) oplTrkDone (void);

#endif
