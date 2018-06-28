// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/build/Android/Preview/cache/ux15/OldEntrysPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.OldEntrysPage.h>
#include <_root.OldEntrysPage.Template31.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Node.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
static uString* STRINGS[2];

namespace g{

// public partial sealed class OldEntrysPage.Template31 :1105
// {
// static Template31() :1114
static void OldEntrysPage__Template31__cctor__fn(uType* __type)
{
}

static void OldEntrysPage__Template31_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Mit\303\244 teit?");
    ::STRINGS[1] = uString::Const("OldEntrysPage.ux");
    type->SetFields(2,
        ::g::OldEntrysPage_typeof(), offsetof(OldEntrysPage__Template31, __parent1), uFieldFlagsWeak,
        ::g::OldEntrysPage_typeof(), offsetof(OldEntrysPage__Template31, __parentInstance1), uFieldFlagsWeak);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)OldEntrysPage__Template31__New2_fn, 0, true, type, 2, ::g::OldEntrysPage_typeof(), ::g::OldEntrysPage_typeof()));
}

::g::Uno::UX::Template_type* OldEntrysPage__Template31_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(OldEntrysPage__Template31);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("OldEntrysPage.Template31", options);
    type->fp_build_ = OldEntrysPage__Template31_build;
    type->fp_cctor_ = OldEntrysPage__Template31__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))OldEntrysPage__Template31__New1_fn;
    return type;
}

// public Template31(OldEntrysPage parent, OldEntrysPage parentInstance) :1109
void OldEntrysPage__Template31__ctor_1_fn(OldEntrysPage__Template31* __this, ::g::OldEntrysPage* parent, ::g::OldEntrysPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :1117
void OldEntrysPage__Template31__New1_fn(OldEntrysPage__Template31* __this, uObject** __retval)
{
    uStackFrame __("OldEntrysPage.Template31", "New()");
    ::g::Fuse::Controls::Text* __self1 = ::g::Fuse::Controls::Text::New3();
    __self1->Value(::STRINGS[0/*"Mitä teit?"*/]);
    __self1->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.6666667f));
    __self1->Alignment(10);
    __self1->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 15.0f));
    __self1->SourceLineNumber(82);
    __self1->SourceFileName(::STRINGS[1/*"OldEntrysPa...*/]);
    return *__retval = __self1, void();
}

// public Template31 New(OldEntrysPage parent, OldEntrysPage parentInstance) :1109
void OldEntrysPage__Template31__New2_fn(::g::OldEntrysPage* parent, ::g::OldEntrysPage* parentInstance, OldEntrysPage__Template31** __retval)
{
    *__retval = OldEntrysPage__Template31::New2(parent, parentInstance);
}

// public Template31(OldEntrysPage parent, OldEntrysPage parentInstance) [instance] :1109
void OldEntrysPage__Template31::ctor_1(::g::OldEntrysPage* parent, ::g::OldEntrysPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template31 New(OldEntrysPage parent, OldEntrysPage parentInstance) [static] :1109
OldEntrysPage__Template31* OldEntrysPage__Template31::New2(::g::OldEntrysPage* parent, ::g::OldEntrysPage* parentInstance)
{
    OldEntrysPage__Template31* obj1 = (OldEntrysPage__Template31*)uNew(OldEntrysPage__Template31_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
