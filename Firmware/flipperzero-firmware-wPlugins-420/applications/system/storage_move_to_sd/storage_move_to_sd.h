#pragma once
#include <gui/gui.h>
#include <gui/view.h>
#include <gui/view_dispatcher.h>
#include <gui/scene_manager.h>
#include <gui/modules/widget.h>
#include <gui/modules/popup.h>
#include <gui/modules/widget_elements/widget_element_i.h>

#include <notification/notification_messages.h>
#include <storage/storage.h>
#include <storage/storage_sd_api.h>
#include <furi.h>

#include <cfw/private.h>
#include <bt/bt_settings.h>
#include <bt/bt_service/bt_i.h>
#include <power/power_settings.h>
#include <desktop/desktop_settings.h>
#include <notification/notification_app.h>
#include <dolphin/helpers/dolphin_state.h>
#include <applications/main/u2f/u2f_data.h>
#include <applications/main/archive/helpers/archive_favorites.h>

#include "scenes/storage_move_to_sd_scene.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    MoveToSdCustomEventExit,
    MoveToSdCustomEventConfirm,
} MoveToSdCustomEvent;

typedef struct {
    // records
    Gui* gui;
    Widget* widget;
    NotificationApp* notifications;

    // view management
    SceneManager* scene_manager;
    ViewDispatcher* view_dispatcher;

    FuriPubSubSubscription* sub;

} StorageMoveToSd;

typedef enum {
    StorageMoveToSdViewWidget,
} StorageMoveToSdView;

bool storage_move_to_sd_perform(void);

#ifdef __cplusplus
}
#endif
