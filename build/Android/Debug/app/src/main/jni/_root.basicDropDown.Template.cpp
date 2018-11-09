// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/basicDropDown.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.basicDropDown.Template.h>
#include <Fuse.Node.h>
#include <Fuse.Selection.Selection.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
static uString* STRINGS[1];

namespace g{

// public partial sealed class basicDropDown.Template :20
// {
// static Template() :29
static void basicDropDown__Template__cctor__fn(uType* __type)
{
}

static void basicDropDown__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Components/basicDropDown.ux");
    type->SetFields(2);
}

::g::Uno::UX::Template_type* basicDropDown__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(basicDropDown__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("basicDropDown.Template", options);
    type->fp_build_ = basicDropDown__Template_build;
    type->fp_cctor_ = basicDropDown__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))basicDropDown__Template__New1_fn;
    return type;
}

// public override sealed object New() :32
void basicDropDown__Template__New1_fn(basicDropDown__Template* __this, uObject** __retval)
{
    ::g::Fuse::Selection::Selection* __self1 = ::g::Fuse::Selection::Selection::New2();
    __self1->SourceLineNumber(29);
    __self1->SourceFileName(::STRINGS[0/*"Components/...*/]);
    return *__retval = __self1, void();
}
// }

} // ::g
