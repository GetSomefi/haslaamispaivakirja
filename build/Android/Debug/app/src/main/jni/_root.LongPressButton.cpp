// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/LongPressButton.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Haslaamispaivak-2263447d.h>
#include <_root.Haslaamispaivak-6ef2759c.h>
#include <_root.Haslaamispaivak-8c2039a.h>
#include <_root.Haslaamispaivak-ba57d52e.h>
#include <_root.Haslaamispaivak-c84c3472.h>
#include <_root.LongPressButton.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.Layer.h>
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
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.VisualEventHandler.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[10];
static uType* TYPES[8];

namespace g{

// public partial sealed class LongPressButton :2
// {
// static LongPressButton() :27
static void LongPressButton__cctor_4_fn(uType* __type)
{
    LongPressButton::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Color"*/]);
    LongPressButton::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"Value"*/]);
    LongPressButton::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"Label"*/]);
    LongPressButton::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"Rect"*/]);
    LongPressButton::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[4/*"Deleted"*/]);
}

static void LongPressButton_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Color");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("Label");
    ::STRINGS[3] = uString::Const("Rect");
    ::STRINGS[4] = uString::Const("Deleted");
    ::STRINGS[5] = uString::Const("eraseData");
    ::STRINGS[6] = uString::Const("Components/LongPressButton.ux");
    ::STRINGS[7] = uString::Const("Tyhjenn\303\244");
    ::STRINGS[8] = uString::Const("Tiedot poistettu");
    ::STRINGS[9] = uString::Const("BackgroundColor");
    ::TYPES[0] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[6] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::Haslaamispaivakirja_accessor_LongPressButton_BackgroundColor_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(115,
        ::g::Uno::Float4_typeof(), offsetof(LongPressButton, _field_BackgroundColor), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(LongPressButton, Rect_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(LongPressButton, Deleted_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(LongPressButton, Label_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(LongPressButton, Label_Color_inst), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(LongPressButton, Label), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(LongPressButton, Rect), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(LongPressButton, temp_eb16), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(LongPressButton, Deleted), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LongPressButton::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LongPressButton::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LongPressButton::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LongPressButton::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LongPressButton::__selector4_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* LongPressButton_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 129;
    options.InterfaceCount = 19;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(LongPressButton);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("LongPressButton", options);
    type->fp_build_ = LongPressButton_build;
    type->fp_ctor_ = (void*)LongPressButton__New4_fn;
    type->fp_cctor_ = LongPressButton__cctor_4_fn;
    type->interface18.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface18.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface18.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface13.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface15.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface14.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface17.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface16.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface16.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface16.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface11.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface11.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface7.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface12.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface11.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface7.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface7.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface9.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface11.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface11.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public LongPressButton() :31
void LongPressButton__ctor_7_fn(LongPressButton* __this)
{
    __this->ctor_7();
}

// public float4 get_BackgroundColor() :8
void LongPressButton__get_BackgroundColor_fn(LongPressButton* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->BackgroundColor();
}

// public void set_BackgroundColor(float4 value) :9
void LongPressButton__set_BackgroundColor_fn(LongPressButton* __this, ::g::Uno::Float4* value)
{
    __this->BackgroundColor(*value);
}

// private void InitializeUX() :35
void LongPressButton__InitializeUX_fn(LongPressButton* __this)
{
    __this->InitializeUX();
}

// public LongPressButton New() :31
void LongPressButton__New4_fn(LongPressButton** __retval)
{
    *__retval = LongPressButton::New4();
}

// public void SetBackgroundColor(float4 value, Uno.UX.IPropertyListener origin) :11
void LongPressButton__SetBackgroundColor_fn(LongPressButton* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetBackgroundColor(*value, origin);
}

::g::Uno::UX::Selector LongPressButton::__selector0_;
::g::Uno::UX::Selector LongPressButton::__selector1_;
::g::Uno::UX::Selector LongPressButton::__selector2_;
::g::Uno::UX::Selector LongPressButton::__selector3_;
::g::Uno::UX::Selector LongPressButton::__selector4_;

// public LongPressButton() [instance] :31
void LongPressButton::ctor_7()
{
    ctor_6();
    InitializeUX();
}

// public float4 get_BackgroundColor() [instance] :8
::g::Uno::Float4 LongPressButton::BackgroundColor()
{
    return _field_BackgroundColor;
}

// public void set_BackgroundColor(float4 value) [instance] :9
void LongPressButton::BackgroundColor(::g::Uno::Float4 value)
{
    SetBackgroundColor(value, NULL);
}

// private void InitializeUX() [instance] :35
void LongPressButton::InitializeUX()
{
    ::g::Fuse::Reactive::Constant* temp = ::g::Fuse::Reactive::Constant::New1(this);
    Rect = ::g::Fuse::Controls::Rectangle::New3();
    Rect_Color_inst = ::g::Haslaamispaivakirja_FuseControlsShape_Color_Property::New1(Rect, LongPressButton::__selector0_);
    ::g::Fuse::Reactive::Property* temp1 = ::g::Fuse::Reactive::Property::New1(temp, ::g::Haslaamispaivakirja_accessor_LongPressButton_BackgroundColor::Singleton());
    Deleted = ::g::Fuse::Triggers::WhileTrue::New2();
    Deleted_Value_inst = ::g::Haslaamispaivakirja_FuseTriggersWhileBool_Value_Property::New1(Deleted, LongPressButton::__selector1_);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"eraseData"*/]);
    Label = ::g::Fuse::Controls::Text::New3();
    Label_Value_inst = ::g::Haslaamispaivakirja_FuseControlsTextControl_Value_Property::New1(Label, LongPressButton::__selector1_);
    Label_Color_inst = ::g::Haslaamispaivakirja_FuseControlsTextControl_Color_Property::New1(Label, LongPressButton::__selector0_);
    ::g::Fuse::Reactive::DataBinding* temp3 = ::g::Fuse::Reactive::DataBinding::New1(Rect_Color_inst, (uObject*)temp1, 3);
    ::g::Fuse::Effects::DropShadow* temp4 = ::g::Fuse::Effects::DropShadow::New2();
    ::g::Fuse::Gestures::WhilePressed* temp5 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Change* temp6 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<float4>*/], Rect_Color_inst);
    ::g::Fuse::Animations::Scale* temp7 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Triggers::Actions::Set* temp8 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<bool>*/], Deleted_Value_inst);
    ::g::Fuse::Triggers::Actions::Callback* temp9 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb16 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp2);
    ::g::Fuse::Animations::Change* temp10 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<string>*/], Label_Value_inst);
    ::g::Fuse::Animations::Change* temp11 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<float4>*/], Label_Color_inst);
    Padding(::g::Uno::Float4__New2(15.0f, 15.0f, 15.0f, 15.0f));
    SourceLineNumber(1);
    SourceFileName(::STRINGS[6/*"Components/...*/]);
    uPtr(Label)->Value(::STRINGS[7/*"Tyhjennä"*/]);
    uPtr(Label)->FontSize(16.0f);
    uPtr(Label)->TextAlignment(1);
    uPtr(Label)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(Label)->Name(LongPressButton::__selector2_);
    uPtr(Label)->SourceLineNumber(4);
    uPtr(Label)->SourceFileName(::STRINGS[6/*"Components/...*/]);
    uPtr(Rect)->Layer(1);
    uPtr(Rect)->Name(LongPressButton::__selector3_);
    uPtr(Rect)->SourceLineNumber(6);
    uPtr(Rect)->SourceFileName(::STRINGS[6/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Rect)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp3);
    temp1->SourceLineNumber(6);
    temp1->SourceFileName(::STRINGS[6/*"Components/...*/]);
    temp->SourceLineNumber(6);
    temp->SourceFileName(::STRINGS[6/*"Components/...*/]);
    temp4->Size(2.0f);
    temp4->Angle(90.0f);
    temp4->Distance(1.0f);
    temp4->Spread(0.2f);
    temp4->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.3764706f));
    temp4->SourceLineNumber(8);
    temp4->SourceFileName(::STRINGS[6/*"Components/...*/]);
    temp5->SourceLineNumber(9);
    temp5->SourceFileName(::STRINGS[6/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb16);
    ::g::Fuse::Animations::Change__set_Value_fn(temp6, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f)));
    temp7->Factor(0.95f);
    temp7->Duration(0.08);
    temp7->Easing(::g::Fuse::Animations::Easing::QuadraticOut());
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp8, uCRef(true));
    temp8->Delay(3.0f);
    temp8->SourceLineNumber(13);
    temp8->SourceFileName(::STRINGS[6/*"Components/...*/]);
    temp9->Delay(3.0f);
    temp9->SourceLineNumber(14);
    temp9->SourceFileName(::STRINGS[6/*"Components/...*/]);
    temp9->add_Handler(uDelegate::New(::TYPES[6/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb16)));
    temp2->SourceLineNumber(14);
    temp2->SourceFileName(::STRINGS[6/*"Components/...*/]);
    uPtr(Deleted)->Name(LongPressButton::__selector4_);
    uPtr(Deleted)->SourceLineNumber(17);
    uPtr(Deleted)->SourceFileName(::STRINGS[6/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Deleted)->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Deleted)->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp11);
    ::g::Fuse::Animations::Change__set_Value_fn(temp10, ::STRINGS[8/*"Tiedot pois...*/]);
    ::g::Fuse::Animations::Change__set_Value_fn(temp11, uCRef(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), Label);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), Rect);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Node>*/]), Deleted);
}

// public void SetBackgroundColor(float4 value, Uno.UX.IPropertyListener origin) [instance] :11
void LongPressButton::SetBackgroundColor(::g::Uno::Float4 value, uObject* origin)
{
    if (::g::Uno::Float4__op_Inequality(value, _field_BackgroundColor))
    {
        _field_BackgroundColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[9/*"BackgroundC...*/]), origin);
    }
}

// public LongPressButton New() [static] :31
LongPressButton* LongPressButton::New4()
{
    LongPressButton* obj1 = (LongPressButton*)uNew(LongPressButton_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

} // ::g
