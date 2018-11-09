// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/textDropDown.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.textDropDown.h>
#include <_root.textDropDown.Template.h>
#include <Fuse.Node.h>
#include <Fuse.Selection.Selection.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
static uString* STRINGS[1];

namespace g{

// public partial sealed class textDropDown.Template :80
// {
// static Template() :89
static void textDropDown__Template__cctor__fn(uType* __type)
{
}

static void textDropDown__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Components/textDropDown.ux");
    type->SetFields(2,
        ::g::textDropDown_typeof(), offsetof(textDropDown__Template, __parent1), uFieldFlagsWeak,
        ::g::textDropDown_typeof(), offsetof(textDropDown__Template, __parentInstance1), uFieldFlagsWeak);
}

::g::Uno::UX::Template_type* textDropDown__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(textDropDown__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("textDropDown.Template", options);
    type->fp_build_ = textDropDown__Template_build;
    type->fp_cctor_ = textDropDown__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))textDropDown__Template__New1_fn;
    return type;
}

// public Template(textDropDown parent, textDropDown parentInstance) :84
void textDropDown__Template__ctor_1_fn(textDropDown__Template* __this, ::g::textDropDown* parent, ::g::textDropDown* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :92
void textDropDown__Template__New1_fn(textDropDown__Template* __this, uObject** __retval)
{
    ::g::Fuse::Selection::Selection* __self1 = ::g::Fuse::Selection::Selection::New2();
    __self1->MaxCount(1);
    __self1->SourceLineNumber(78);
    __self1->SourceFileName(::STRINGS[0/*"Components/...*/]);
    return *__retval = __self1, void();
}

// public Template New(textDropDown parent, textDropDown parentInstance) :84
void textDropDown__Template__New2_fn(::g::textDropDown* parent, ::g::textDropDown* parentInstance, textDropDown__Template** __retval)
{
    *__retval = textDropDown__Template::New2(parent, parentInstance);
}

// public Template(textDropDown parent, textDropDown parentInstance) [instance] :84
void textDropDown__Template::ctor_1(::g::textDropDown* parent, ::g::textDropDown* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(textDropDown parent, textDropDown parentInstance) [static] :84
textDropDown__Template* textDropDown__Template::New2(::g::textDropDown* parent, ::g::textDropDown* parentInstance)
{
    textDropDown__Template* obj1 = (textDropDown__Template*)uNew(textDropDown__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
