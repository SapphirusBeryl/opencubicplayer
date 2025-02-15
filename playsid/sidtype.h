#ifndef SIDPLAY_SIDTYPE_H
#define SIDPLAY_SIDTYPE_H

struct PluginInitAPI_t;
struct PluginCloseAPI_t;

int __attribute__ ((visibility ("internal"))) sid_type_init (struct PluginInitAPI_t *API);
void __attribute__ ((visibility ("internal"))) sid_type_done (struct PluginCloseAPI_t *API);

extern const struct cpifaceplayerstruct __attribute__ ((visibility ("internal"))) sidPlayer;

#endif
