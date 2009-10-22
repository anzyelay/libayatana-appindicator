#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "custom-indicator.h"

typedef struct _CustomIndicatorPrivate CustomIndicatorPrivate;
struct _CustomIndicatorPrivate {
	int placeholder;
};

#define CUSTOM_INDICATOR_GET_PRIVATE(o) \
(G_TYPE_INSTANCE_GET_PRIVATE ((o), CUSTOM_INDICATOR_TYPE, CustomIndicatorPrivate))

static void custom_indicator_class_init (CustomIndicatorClass *klass);
static void custom_indicator_init       (CustomIndicator *self);
static void custom_indicator_dispose    (GObject *object);
static void custom_indicator_finalize   (GObject *object);

G_DEFINE_TYPE (CustomIndicator, custom_indicator, G_TYPE_OBJECT);

static void
custom_indicator_class_init (CustomIndicatorClass *klass)
{
	GObjectClass *object_class = G_OBJECT_CLASS (klass);

	g_type_class_add_private (klass, sizeof (CustomIndicatorPrivate));

	object_class->dispose = custom_indicator_dispose;
	object_class->finalize = custom_indicator_finalize;

	return;
}

static void
custom_indicator_init (CustomIndicator *self)
{

	return;
}

static void
custom_indicator_dispose (GObject *object)
{

	G_OBJECT_CLASS (custom_indicator_parent_class)->dispose (object);
	return;
}

static void
custom_indicator_finalize (GObject *object)
{

	G_OBJECT_CLASS (custom_indicator_parent_class)->finalize (object);
	return;
}

