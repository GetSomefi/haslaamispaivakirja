// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/OldEntrysPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Haslaamispaivak-b8118429.h>
#include <_root.Haslaamispaivak-c1183573.h>
#include <_root.OldEntrysPage.h>
#include <_root.OldEntrysPage.Template.h>
#include <basicBtn.Button.h>
#include <Fuse.Binding.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[7];
static uType* TYPES[2];

namespace g{

// public partial sealed class OldEntrysPage.Template :6
// {
// static Template() :18
static void OldEntrysPage__Template__cctor__fn(uType* __type)
{
    OldEntrysPage__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Text"*/]);
    OldEntrysPage__Template::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"DataKey"*/]);
}

static void OldEntrysPage__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Text");
    ::STRINGS[1] = uString::Const("DataKey");
    ::STRINGS[2] = uString::Const("openEntry");
    ::STRINGS[3] = uString::Const("text");
    ::STRINGS[4] = uString::Const("key");
    ::STRINGS[5] = uString::Const("#125F63");
    ::STRINGS[6] = uString::Const("OldEntrysPage.ux");
    ::TYPES[0] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::OldEntrysPage_typeof(), offsetof(OldEntrysPage__Template, __parent1), uFieldFlagsWeak,
        ::g::OldEntrysPage_typeof(), offsetof(OldEntrysPage__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(OldEntrysPage__Template, __self_Text_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(OldEntrysPage__Template, __self_DataKey_inst1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(OldEntrysPage__Template, temp_eb2), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&OldEntrysPage__Template::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&OldEntrysPage__Template::__selector1_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* OldEntrysPage__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(OldEntrysPage__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("OldEntrysPage.Template", options);
    type->fp_build_ = OldEntrysPage__Template_build;
    type->fp_cctor_ = OldEntrysPage__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))OldEntrysPage__Template__New1_fn;
    return type;
}

// public Template(OldEntrysPage parent, OldEntrysPage parentInstance) :10
void OldEntrysPage__Template__ctor_1_fn(OldEntrysPage__Template* __this, ::g::OldEntrysPage* parent, ::g::OldEntrysPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :21
void OldEntrysPage__Template__New1_fn(OldEntrysPage__Template* __this, uObject** __retval)
{
    ::g::basicBtn::Button* __self1 = ::g::basicBtn::Button::New4();
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"openEntry"*/]);
    __this->__self_Text_inst1 = ::g::Haslaamispaivakirja_basicBtnButton_Text_Property::New1(__self1, OldEntrysPage__Template::__selector0_);
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[3/*"text"*/]);
    __this->__self_DataKey_inst1 = ::g::Haslaamispaivakirja_basicBtnButton_DataKey_Property::New1(__self1, OldEntrysPage__Template::__selector1_);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[4/*"key"*/]);
    __this->temp_eb2 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp);
    ::g::Fuse::Reactive::DataBinding* temp3 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Text_inst1, (uObject*)temp1, 3);
    ::g::Fuse::Reactive::DataBinding* temp4 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_DataKey_inst1, (uObject*)temp2, 3);
    __self1->BgColor(::STRINGS[5/*"#125F63"*/]);
    __self1->FontSize(14.0f);
    __self1->SourceLineNumber(29);
    __self1->SourceFileName(::STRINGS[6/*"OldEntrysPa...*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(__self1, uDelegate::New(::TYPES[0/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb2)));
    temp->SourceLineNumber(29);
    temp->SourceFileName(::STRINGS[6/*"OldEntrysPa...*/]);
    temp1->SourceLineNumber(29);
    temp1->SourceFileName(::STRINGS[6/*"OldEntrysPa...*/]);
    temp2->SourceLineNumber(29);
    temp2->SourceFileName(::STRINGS[6/*"OldEntrysPa...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp4);
    return *__retval = __self1, void();
}

// public Template New(OldEntrysPage parent, OldEntrysPage parentInstance) :10
void OldEntrysPage__Template__New2_fn(::g::OldEntrysPage* parent, ::g::OldEntrysPage* parentInstance, OldEntrysPage__Template** __retval)
{
    *__retval = OldEntrysPage__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector OldEntrysPage__Template::__selector0_;
::g::Uno::UX::Selector OldEntrysPage__Template::__selector1_;

// public Template(OldEntrysPage parent, OldEntrysPage parentInstance) [instance] :10
void OldEntrysPage__Template::ctor_1(::g::OldEntrysPage* parent, ::g::OldEntrysPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(OldEntrysPage parent, OldEntrysPage parentInstance) [static] :10
OldEntrysPage__Template* OldEntrysPage__Template::New2(::g::OldEntrysPage* parent, ::g::OldEntrysPage* parentInstance)
{
    OldEntrysPage__Template* obj1 = (OldEntrysPage__Template*)uNew(OldEntrysPage__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
