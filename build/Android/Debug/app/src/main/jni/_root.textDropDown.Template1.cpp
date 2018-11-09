// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/textDropDown.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Haslaamispaivak-13e9c6f4.h>
#include <_root.Haslaamispaivak-3e49a42.h>
#include <_root.Haslaamispaivak-a6712a70.h>
#include <_root.Haslaamispaivak-b2b137e5.h>
#include <_root.Haslaamispaivak-ba952dcf.h>
#include <_root.Haslaamispaivak-ccfd8271.h>
#include <_root.textDropDown.h>
#include <_root.textDropDown.Template1.h>
#include <Fuse.Binding.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constan-264ec80.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEventHandler.h>
#include <listBtn.Button.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[11];
static uType* TYPES[5];

namespace g{

// public partial sealed class textDropDown.Template1 :102
// {
// static Template1() :118
static void textDropDown__Template1__cctor__fn(uType* __type)
{
    textDropDown__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Send"*/]);
    textDropDown__Template1::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"Value"*/]);
    textDropDown__Template1::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"Text"*/]);
    textDropDown__Template1::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"DataKey"*/]);
    textDropDown__Template1::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[4/*"FakeBtn"*/]);
}

static void textDropDown__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Send");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("Text");
    ::STRINGS[3] = uString::Const("DataKey");
    ::STRINGS[4] = uString::Const("FakeBtn");
    ::STRINGS[5] = uString::Const("selectedFunc");
    ::STRINGS[6] = uString::Const("isOnInputDropDown");
    ::STRINGS[7] = uString::Const("selectThisOption");
    ::STRINGS[8] = uString::Const("name");
    ::STRINGS[9] = uString::Const("key");
    ::STRINGS[10] = uString::Const("Components/textDropDown.ux");
    ::TYPES[0] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetDependencies(
        ::g::Haslaamispaivakirja_accessor_listBtn_Button_Text_typeof());
    type->SetFields(2,
        ::g::textDropDown_typeof(), offsetof(textDropDown__Template1, __parent1), uFieldFlagsWeak,
        ::g::textDropDown_typeof(), offsetof(textDropDown__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(textDropDown__Template1, this1_Send_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(textDropDown__Template1, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(textDropDown__Template1, __self_Send_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(textDropDown__Template1, __self_Text_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(textDropDown__Template1, __self_DataKey_inst1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(textDropDown__Template1, temp_eb23), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(textDropDown__Template1, temp_eb24), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown__Template1::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown__Template1::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown__Template1::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown__Template1::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown__Template1::__selector4_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* textDropDown__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 16;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(textDropDown__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("textDropDown.Template1", options);
    type->fp_build_ = textDropDown__Template1_build;
    type->fp_cctor_ = textDropDown__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))textDropDown__Template1__New1_fn;
    return type;
}

// public Template1(textDropDown parent, textDropDown parentInstance) :106
void textDropDown__Template1__ctor_1_fn(textDropDown__Template1* __this, ::g::textDropDown* parent, ::g::textDropDown* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :121
void textDropDown__Template1__New1_fn(textDropDown__Template1* __this, uObject** __retval)
{
    ::g::listBtn::Button* __self1 = ::g::listBtn::Button::New4();
    __this->this1_Send_inst = ::g::Haslaamispaivakirja_textDropDown_Send_Property::New1(__this->__parent1, textDropDown__Template1::__selector0_);
    ::g::Fuse::Reactive::Constant* temp1 = ::g::Fuse::Reactive::Constant::New1(__self1);
    ::g::Fuse::Triggers::Actions::Set* temp = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<string>*/], __this->this1_Send_inst);
    __this->temp_Value_inst = ::g::Haslaamispaivakirja_FuseTriggersActionsSetstring_Value_Property::New1(temp, textDropDown__Template1::__selector1_);
    ::g::Fuse::Reactive::Property* temp2 = ::g::Fuse::Reactive::Property::New1(temp1, ::g::Haslaamispaivakirja_accessor_listBtn_Button_Text::Singleton());
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"selectedFunc"*/]);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"isOnInputDr...*/]);
    __this->__self_Send_inst1 = ::g::Haslaamispaivakirja_listBtnButton_Send_Property::New1(__self1, textDropDown__Template1::__selector0_);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"selectThisO...*/]);
    __this->__self_Text_inst1 = ::g::Haslaamispaivakirja_listBtnButton_Text_Property::New1(__self1, textDropDown__Template1::__selector2_);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[8/*"name"*/]);
    __this->__self_DataKey_inst1 = ::g::Haslaamispaivakirja_listBtnButton_DataKey_Property::New1(__self1, textDropDown__Template1::__selector3_);
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[9/*"key"*/]);
    ::g::Fuse::Gestures::Clicked* temp8 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp9 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp10 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Reactive::DataBinding* temp11 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Value_inst, (uObject*)temp2, 3);
    __this->temp_eb23 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp3);
    __this->temp_eb24 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp4);
    ::g::Fuse::Reactive::DataBinding* temp12 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Send_inst1, (uObject*)temp5, 3);
    ::g::Fuse::Reactive::DataBinding* temp13 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Text_inst1, (uObject*)temp6, 3);
    ::g::Fuse::Reactive::DataBinding* temp14 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_DataKey_inst1, (uObject*)temp7, 3);
    __self1->FontSize(14.0f);
    __self1->Name(textDropDown__Template1::__selector4_);
    __self1->SourceLineNumber(79);
    __self1->SourceFileName(::STRINGS[10/*"Components/...*/]);
    temp8->SourceLineNumber(80);
    temp8->SourceFileName(::STRINGS[10/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Actions()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Actions()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Actions()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb24);
    temp->SourceLineNumber(81);
    temp->SourceFileName(::STRINGS[10/*"Components/...*/]);
    temp2->SourceLineNumber(81);
    temp2->SourceFileName(::STRINGS[10/*"Components/...*/]);
    temp1->SourceLineNumber(81);
    temp1->SourceFileName(::STRINGS[10/*"Components/...*/]);
    temp9->SourceLineNumber(82);
    temp9->SourceFileName(::STRINGS[10/*"Components/...*/]);
    temp9->add_Handler(uDelegate::New(::TYPES[3/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb23)));
    temp3->SourceLineNumber(82);
    temp3->SourceFileName(::STRINGS[10/*"Components/...*/]);
    temp10->SourceLineNumber(83);
    temp10->SourceFileName(::STRINGS[10/*"Components/...*/]);
    temp10->add_Handler(uDelegate::New(::TYPES[3/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb24)));
    temp4->SourceLineNumber(83);
    temp4->SourceFileName(::STRINGS[10/*"Components/...*/]);
    temp5->SourceLineNumber(79);
    temp5->SourceFileName(::STRINGS[10/*"Components/...*/]);
    temp6->SourceLineNumber(79);
    temp6->SourceFileName(::STRINGS[10/*"Components/...*/]);
    temp7->SourceLineNumber(79);
    temp7->SourceFileName(::STRINGS[10/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp14);
    return *__retval = __self1, void();
}

// public Template1 New(textDropDown parent, textDropDown parentInstance) :106
void textDropDown__Template1__New2_fn(::g::textDropDown* parent, ::g::textDropDown* parentInstance, textDropDown__Template1** __retval)
{
    *__retval = textDropDown__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector textDropDown__Template1::__selector0_;
::g::Uno::UX::Selector textDropDown__Template1::__selector1_;
::g::Uno::UX::Selector textDropDown__Template1::__selector2_;
::g::Uno::UX::Selector textDropDown__Template1::__selector3_;
::g::Uno::UX::Selector textDropDown__Template1::__selector4_;

// public Template1(textDropDown parent, textDropDown parentInstance) [instance] :106
void textDropDown__Template1::ctor_1(::g::textDropDown* parent, ::g::textDropDown* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(textDropDown parent, textDropDown parentInstance) [static] :106
textDropDown__Template1* textDropDown__Template1::New2(::g::textDropDown* parent, ::g::textDropDown* parentInstance)
{
    textDropDown__Template1* obj1 = (textDropDown__Template1*)uNew(textDropDown__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
