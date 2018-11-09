// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/OldEntrysPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.OldEntrysPage.h>
#include <_root.OldEntrysPage.Template1.h>
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

// public partial sealed class OldEntrysPage.Template1 :52
// {
// static Template1() :61
static void OldEntrysPage__Template1__cctor__fn(uType* __type)
{
}

static void OldEntrysPage__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Mit\303\244 tapahtui?");
    ::STRINGS[1] = uString::Const("OldEntrysPage.ux");
    type->SetFields(2,
        ::g::OldEntrysPage_typeof(), offsetof(OldEntrysPage__Template1, __parent1), uFieldFlagsWeak,
        ::g::OldEntrysPage_typeof(), offsetof(OldEntrysPage__Template1, __parentInstance1), uFieldFlagsWeak);
}

::g::Uno::UX::Template_type* OldEntrysPage__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(OldEntrysPage__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("OldEntrysPage.Template1", options);
    type->fp_build_ = OldEntrysPage__Template1_build;
    type->fp_cctor_ = OldEntrysPage__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))OldEntrysPage__Template1__New1_fn;
    return type;
}

// public Template1(OldEntrysPage parent, OldEntrysPage parentInstance) :56
void OldEntrysPage__Template1__ctor_1_fn(OldEntrysPage__Template1* __this, ::g::OldEntrysPage* parent, ::g::OldEntrysPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :64
void OldEntrysPage__Template1__New1_fn(OldEntrysPage__Template1* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Text* __self1 = ::g::Fuse::Controls::Text::New3();
    __self1->Value(::STRINGS[0/*"Mitä tapaht...*/]);
    __self1->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.6666667f));
    __self1->Alignment(10);
    __self1->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 15.0f));
    __self1->SourceLineNumber(37);
    __self1->SourceFileName(::STRINGS[1/*"OldEntrysPa...*/]);
    return *__retval = __self1, void();
}

// public Template1 New(OldEntrysPage parent, OldEntrysPage parentInstance) :56
void OldEntrysPage__Template1__New2_fn(::g::OldEntrysPage* parent, ::g::OldEntrysPage* parentInstance, OldEntrysPage__Template1** __retval)
{
    *__retval = OldEntrysPage__Template1::New2(parent, parentInstance);
}

// public Template1(OldEntrysPage parent, OldEntrysPage parentInstance) [instance] :56
void OldEntrysPage__Template1::ctor_1(::g::OldEntrysPage* parent, ::g::OldEntrysPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(OldEntrysPage parent, OldEntrysPage parentInstance) [static] :56
OldEntrysPage__Template1* OldEntrysPage__Template1::New2(::g::OldEntrysPage* parent, ::g::OldEntrysPage* parentInstance)
{
    OldEntrysPage__Template1* obj1 = (OldEntrysPage__Template1*)uNew(OldEntrysPage__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
