// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/OldEntrysPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Haslaamispaivak-f3cea9df.h>
#include <_root.ListItem.h>
#include <_root.OldEntrysPage.h>
#include <_root.OldEntrysPage.Template58.h>
#include <Fuse.Binding.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[4];
static uType* TYPES[1];

namespace g{

// public partial sealed class OldEntrysPage.Template58 :2057
// {
// static Template58() :2067
static void OldEntrysPage__Template58__cctor__fn(uType* __type)
{
    OldEntrysPage__Template58::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"TheValue"*/]);
}

static void OldEntrysPage__Template58_build(uType* type)
{
    ::STRINGS[0] = uString::Const("TheValue");
    ::STRINGS[1] = uString::Const("lastModified");
    ::STRINGS[2] = uString::Const("Viimeksi p\303\244ivitetty");
    ::STRINGS[3] = uString::Const("OldEntrysPage.ux");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::OldEntrysPage_typeof(), offsetof(OldEntrysPage__Template58, __parent1), uFieldFlagsWeak,
        ::g::OldEntrysPage_typeof(), offsetof(OldEntrysPage__Template58, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(OldEntrysPage__Template58, __self_TheValue_inst1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&OldEntrysPage__Template58::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* OldEntrysPage__Template58_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(OldEntrysPage__Template58);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("OldEntrysPage.Template58", options);
    type->fp_build_ = OldEntrysPage__Template58_build;
    type->fp_cctor_ = OldEntrysPage__Template58__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))OldEntrysPage__Template58__New1_fn;
    return type;
}

// public Template58(OldEntrysPage parent, OldEntrysPage parentInstance) :2061
void OldEntrysPage__Template58__ctor_1_fn(OldEntrysPage__Template58* __this, ::g::OldEntrysPage* parent, ::g::OldEntrysPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :2070
void OldEntrysPage__Template58__New1_fn(OldEntrysPage__Template58* __this, uObject** __retval)
{
    ::g::ListItem* __self1 = ::g::ListItem::New4();
    __this->__self_TheValue_inst1 = ::g::Haslaamispaivakirja_ListItem_TheValue_Property::New1(__self1, OldEntrysPage__Template58::__selector0_);
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[1/*"lastModified"*/]);
    ::g::Fuse::Reactive::DataBinding* temp1 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_TheValue_inst1, (uObject*)temp, 3);
    __self1->RealLabel(::STRINGS[2/*"Viimeksi pä...*/]);
    __self1->SourceLineNumber(113);
    __self1->SourceFileName(::STRINGS[3/*"OldEntrysPa...*/]);
    temp->SourceLineNumber(113);
    temp->SourceFileName(::STRINGS[3/*"OldEntrysPa...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp1);
    return *__retval = __self1, void();
}

// public Template58 New(OldEntrysPage parent, OldEntrysPage parentInstance) :2061
void OldEntrysPage__Template58__New2_fn(::g::OldEntrysPage* parent, ::g::OldEntrysPage* parentInstance, OldEntrysPage__Template58** __retval)
{
    *__retval = OldEntrysPage__Template58::New2(parent, parentInstance);
}

::g::Uno::UX::Selector OldEntrysPage__Template58::__selector0_;

// public Template58(OldEntrysPage parent, OldEntrysPage parentInstance) [instance] :2061
void OldEntrysPage__Template58::ctor_1(::g::OldEntrysPage* parent, ::g::OldEntrysPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template58 New(OldEntrysPage parent, OldEntrysPage parentInstance) [static] :2061
OldEntrysPage__Template58* OldEntrysPage__Template58::New2(::g::OldEntrysPage* parent, ::g::OldEntrysPage* parentInstance)
{
    OldEntrysPage__Template58* obj1 = (OldEntrysPage__Template58*)uNew(OldEntrysPage__Template58_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
