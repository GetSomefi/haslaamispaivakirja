// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/basicDropDown.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.basicDropDown.Template1.h>
#include <_root.Haslaamispaivak-ba952dcf.h>
#include <_root.Haslaamispaivak-ccfd8271.h>
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
#include <listBtn.Button.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[6];
static uType* TYPES[2];

namespace g{

// public partial sealed class basicDropDown.Template1 :41
// {
// static Template1() :53
static void basicDropDown__Template1__cctor__fn(uType* __type)
{
    basicDropDown__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Text"*/]);
    basicDropDown__Template1::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"DataKey"*/]);
}

static void basicDropDown__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Text");
    ::STRINGS[1] = uString::Const("DataKey");
    ::STRINGS[2] = uString::Const("selectThisOption");
    ::STRINGS[3] = uString::Const("name");
    ::STRINGS[4] = uString::Const("key");
    ::STRINGS[5] = uString::Const("Components/basicDropDown.ux");
    ::TYPES[0] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(basicDropDown__Template1, __self_Text_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(basicDropDown__Template1, __self_DataKey_inst1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(basicDropDown__Template1, temp_eb20), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&basicDropDown__Template1::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&basicDropDown__Template1::__selector1_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* basicDropDown__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 7;
    options.ObjectSize = sizeof(basicDropDown__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("basicDropDown.Template1", options);
    type->fp_build_ = basicDropDown__Template1_build;
    type->fp_cctor_ = basicDropDown__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))basicDropDown__Template1__New1_fn;
    return type;
}

// public override sealed object New() :56
void basicDropDown__Template1__New1_fn(basicDropDown__Template1* __this, uObject** __retval)
{
    ::g::listBtn::Button* __self1 = ::g::listBtn::Button::New4();
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"selectThisO...*/]);
    __this->__self_Text_inst1 = ::g::Haslaamispaivakirja_listBtnButton_Text_Property::New1(__self1, basicDropDown__Template1::__selector0_);
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[3/*"name"*/]);
    __this->__self_DataKey_inst1 = ::g::Haslaamispaivakirja_listBtnButton_DataKey_Property::New1(__self1, basicDropDown__Template1::__selector1_);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[4/*"key"*/]);
    __this->temp_eb20 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp);
    ::g::Fuse::Reactive::DataBinding* temp3 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Text_inst1, (uObject*)temp1, 3);
    ::g::Fuse::Reactive::DataBinding* temp4 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_DataKey_inst1, (uObject*)temp2, 3);
    __self1->FontSize(14.0f);
    __self1->SourceLineNumber(30);
    __self1->SourceFileName(::STRINGS[5/*"Components/...*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(__self1, uDelegate::New(::TYPES[0/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb20)));
    temp->SourceLineNumber(30);
    temp->SourceFileName(::STRINGS[5/*"Components/...*/]);
    temp1->SourceLineNumber(30);
    temp1->SourceFileName(::STRINGS[5/*"Components/...*/]);
    temp2->SourceLineNumber(30);
    temp2->SourceFileName(::STRINGS[5/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp4);
    return *__retval = __self1, void();
}

::g::Uno::UX::Selector basicDropDown__Template1::__selector0_;
::g::Uno::UX::Selector basicDropDown__Template1::__selector1_;
// }

} // ::g
