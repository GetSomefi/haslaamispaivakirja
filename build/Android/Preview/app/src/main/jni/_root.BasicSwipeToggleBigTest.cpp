// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/build/Android/Preview/cache/ux15/BasicSwipeToggleBigTest.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.BasicSwipeToggleBigTest.h>
#include <_root.fa_times.h>
#include <_root.Haslaamispaivak-2263447d.h>
#include <_root.Haslaamispaivak-5aae4809.h>
#include <_root.Haslaamispaivak-5fc8c6f7.h>
#include <_root.Haslaamispaivak-7dc7b714.h>
#include <_root.Haslaamispaivak-a58dc1b0.h>
#include <_root.Haslaamispaivak-ae4410d6.h>
#include <_root.Haslaamispaivak-bdf24412.h>
#include <_root.Haslaamispaivak-c73e48db.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.Trans-997c8373.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shadow.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.SwipeDirection.h>
#include <Fuse.Gestures.SwipeGesture.h>
#include <Fuse.Gestures.SwipeType.h>
#include <Fuse.Gestures.SwipingAnimation.h>
#include <Fuse.Gestures.ToggleS-2ddf1b4f.h>
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
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.VisualEventHandler.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[13];
static uType* TYPES[7];

namespace g{

// public partial sealed class BasicSwipeToggleBigTest :2
// {
// static BasicSwipeToggleBigTest() :91
static void BasicSwipeToggleBigTest__cctor_4_fn(uType* __type)
{
    BasicSwipeToggleBigTest::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"IsActive"*/]);
    BasicSwipeToggleBigTest::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"Color"*/]);
    BasicSwipeToggleBigTest::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"Value"*/]);
    BasicSwipeToggleBigTest::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"Sendable"*/]);
    BasicSwipeToggleBigTest::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[4/*"swipe"*/]);
    BasicSwipeToggleBigTest::__selector5_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[5/*"handle"*/]);
    BasicSwipeToggleBigTest::__selector6_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[6/*"background"*/]);
}

static void BasicSwipeToggleBigTest_build(uType* type)
{
    ::STRINGS[0] = uString::Const("IsActive");
    ::STRINGS[1] = uString::Const("Color");
    ::STRINGS[2] = uString::Const("Value");
    ::STRINGS[3] = uString::Const("Sendable");
    ::STRINGS[4] = uString::Const("swipe");
    ::STRINGS[5] = uString::Const("handle");
    ::STRINGS[6] = uString::Const("background");
    ::STRINGS[7] = uString::Const("isOn");
    ::STRINGS[8] = uString::Const("isOnVal");
    ::STRINGS[9] = uString::Const("Components/BasicSwipeToggleBigTest.ux");
    ::STRINGS[10] = uString::Const("Opacity");
    ::STRINGS[11] = uString::Const("PrimaryColor");
    ::STRINGS[12] = uString::Const("SecondaryColor");
    ::TYPES[0] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetDependencies(
        ::g::Haslaamispaivakirja_accessor_BasicSwipeToggleBigTest_IsActive_typeof(),
        ::g::Haslaamispaivakirja_accessor_BasicSwipeToggleBigTest_PrimaryColor_typeof(),
        ::g::Haslaamispaivakirja_accessor_BasicSwipeToggleBigTest_SecondaryColor_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(120,
        ::g::Uno::Bool_typeof(), offsetof(BasicSwipeToggleBigTest, _field_Sendable), 0,
        ::g::Uno::Float4_typeof(), offsetof(BasicSwipeToggleBigTest, _field_PrimaryColor), 0,
        ::g::Uno::Float4_typeof(), offsetof(BasicSwipeToggleBigTest, _field_SecondaryColor), 0,
        ::g::Uno::Float_typeof(), offsetof(BasicSwipeToggleBigTest, _field_Opacity), 0,
        ::g::Uno::Bool_typeof(), offsetof(BasicSwipeToggleBigTest, _field_IsActive), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(BasicSwipeToggleBigTest, swipe_IsActive_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(BasicSwipeToggleBigTest, handle_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(BasicSwipeToggleBigTest, background_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(BasicSwipeToggleBigTest, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(BasicSwipeToggleBigTest, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(BasicSwipeToggleBigTest, this_Sendable_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(BasicSwipeToggleBigTest, temp2_Value_inst), 0,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(BasicSwipeToggleBigTest, swipe), 0,
        ::g::Fuse::Triggers::Actions::Callback_typeof(), offsetof(BasicSwipeToggleBigTest, TheClick), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(BasicSwipeToggleBigTest, temp_eb16), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(BasicSwipeToggleBigTest, handle), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(BasicSwipeToggleBigTest, background), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BasicSwipeToggleBigTest::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BasicSwipeToggleBigTest::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BasicSwipeToggleBigTest::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BasicSwipeToggleBigTest::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BasicSwipeToggleBigTest::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BasicSwipeToggleBigTest::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BasicSwipeToggleBigTest::__selector6_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(16,
        new uFunction("get_IsActive", NULL, (void*)BasicSwipeToggleBigTest__get_IsActive_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsActive", NULL, (void*)BasicSwipeToggleBigTest__set_IsActive_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)BasicSwipeToggleBigTest__New4_fn, 0, true, type, 0),
        new uFunction("get_Opacity", NULL, (void*)BasicSwipeToggleBigTest__get_Opacity1_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Opacity", NULL, (void*)BasicSwipeToggleBigTest__set_Opacity1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_PrimaryColor", NULL, (void*)BasicSwipeToggleBigTest__get_PrimaryColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_PrimaryColor", NULL, (void*)BasicSwipeToggleBigTest__set_PrimaryColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_SecondaryColor", NULL, (void*)BasicSwipeToggleBigTest__get_SecondaryColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_SecondaryColor", NULL, (void*)BasicSwipeToggleBigTest__set_SecondaryColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_Sendable", NULL, (void*)BasicSwipeToggleBigTest__get_Sendable_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Sendable", NULL, (void*)BasicSwipeToggleBigTest__set_Sendable_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("SetIsActive", NULL, (void*)BasicSwipeToggleBigTest__SetIsActive_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetOpacity", NULL, (void*)BasicSwipeToggleBigTest__SetOpacity1_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetPrimaryColor", NULL, (void*)BasicSwipeToggleBigTest__SetPrimaryColor_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetSecondaryColor", NULL, (void*)BasicSwipeToggleBigTest__SetSecondaryColor_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetSendable", NULL, (void*)BasicSwipeToggleBigTest__SetSendable_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Uno::UX::IPropertyListener_typeof()));
}

::g::Fuse::Controls::Panel_type* BasicSwipeToggleBigTest_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 144;
    options.InterfaceCount = 19;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(BasicSwipeToggleBigTest);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("BasicSwipeToggleBigTest", options);
    type->fp_build_ = BasicSwipeToggleBigTest_build;
    type->fp_ctor_ = (void*)BasicSwipeToggleBigTest__New4_fn;
    type->fp_cctor_ = BasicSwipeToggleBigTest__cctor_4_fn;
    type->interface18.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface18.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface18.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface13.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface15.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface14.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface17.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface16.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface16.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
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

// public BasicSwipeToggleBigTest() :95
void BasicSwipeToggleBigTest__ctor_7_fn(BasicSwipeToggleBigTest* __this)
{
    __this->ctor_7();
}

// private void InitializeUX() :99
void BasicSwipeToggleBigTest__InitializeUX_fn(BasicSwipeToggleBigTest* __this)
{
    __this->InitializeUX();
}

// public bool get_IsActive() :68
void BasicSwipeToggleBigTest__get_IsActive_fn(BasicSwipeToggleBigTest* __this, bool* __retval)
{
    *__retval = __this->IsActive();
}

// public void set_IsActive(bool value) :69
void BasicSwipeToggleBigTest__set_IsActive_fn(BasicSwipeToggleBigTest* __this, bool* value)
{
    __this->IsActive(*value);
}

// public BasicSwipeToggleBigTest New() :95
void BasicSwipeToggleBigTest__New4_fn(BasicSwipeToggleBigTest** __retval)
{
    *__retval = BasicSwipeToggleBigTest::New4();
}

// public float get_Opacity() :53
void BasicSwipeToggleBigTest__get_Opacity1_fn(BasicSwipeToggleBigTest* __this, float* __retval)
{
    *__retval = __this->Opacity1();
}

// public void set_Opacity(float value) :54
void BasicSwipeToggleBigTest__set_Opacity1_fn(BasicSwipeToggleBigTest* __this, float* value)
{
    __this->Opacity1(*value);
}

// public float4 get_PrimaryColor() :23
void BasicSwipeToggleBigTest__get_PrimaryColor_fn(BasicSwipeToggleBigTest* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->PrimaryColor();
}

// public void set_PrimaryColor(float4 value) :24
void BasicSwipeToggleBigTest__set_PrimaryColor_fn(BasicSwipeToggleBigTest* __this, ::g::Uno::Float4* value)
{
    __this->PrimaryColor(*value);
}

// public float4 get_SecondaryColor() :38
void BasicSwipeToggleBigTest__get_SecondaryColor_fn(BasicSwipeToggleBigTest* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->SecondaryColor();
}

// public void set_SecondaryColor(float4 value) :39
void BasicSwipeToggleBigTest__set_SecondaryColor_fn(BasicSwipeToggleBigTest* __this, ::g::Uno::Float4* value)
{
    __this->SecondaryColor(*value);
}

// public bool get_Sendable() :8
void BasicSwipeToggleBigTest__get_Sendable_fn(BasicSwipeToggleBigTest* __this, bool* __retval)
{
    *__retval = __this->Sendable();
}

// public void set_Sendable(bool value) :9
void BasicSwipeToggleBigTest__set_Sendable_fn(BasicSwipeToggleBigTest* __this, bool* value)
{
    __this->Sendable(*value);
}

// public void SetIsActive(bool value, Uno.UX.IPropertyListener origin) :71
void BasicSwipeToggleBigTest__SetIsActive_fn(BasicSwipeToggleBigTest* __this, bool* value, uObject* origin)
{
    __this->SetIsActive(*value, origin);
}

// public void SetOpacity(float value, Uno.UX.IPropertyListener origin) :56
void BasicSwipeToggleBigTest__SetOpacity1_fn(BasicSwipeToggleBigTest* __this, float* value, uObject* origin)
{
    __this->SetOpacity1(*value, origin);
}

// public void SetPrimaryColor(float4 value, Uno.UX.IPropertyListener origin) :26
void BasicSwipeToggleBigTest__SetPrimaryColor_fn(BasicSwipeToggleBigTest* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetPrimaryColor(*value, origin);
}

// public void SetSecondaryColor(float4 value, Uno.UX.IPropertyListener origin) :41
void BasicSwipeToggleBigTest__SetSecondaryColor_fn(BasicSwipeToggleBigTest* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetSecondaryColor(*value, origin);
}

// public void SetSendable(bool value, Uno.UX.IPropertyListener origin) :11
void BasicSwipeToggleBigTest__SetSendable_fn(BasicSwipeToggleBigTest* __this, bool* value, uObject* origin)
{
    __this->SetSendable(*value, origin);
}

::g::Uno::UX::Selector BasicSwipeToggleBigTest::__selector0_;
::g::Uno::UX::Selector BasicSwipeToggleBigTest::__selector1_;
::g::Uno::UX::Selector BasicSwipeToggleBigTest::__selector2_;
::g::Uno::UX::Selector BasicSwipeToggleBigTest::__selector3_;
::g::Uno::UX::Selector BasicSwipeToggleBigTest::__selector4_;
::g::Uno::UX::Selector BasicSwipeToggleBigTest::__selector5_;
::g::Uno::UX::Selector BasicSwipeToggleBigTest::__selector6_;

// public BasicSwipeToggleBigTest() [instance] :95
void BasicSwipeToggleBigTest::ctor_7()
{
    uStackFrame __("BasicSwipeToggleBigTest", ".ctor()");
    ctor_6();
    InitializeUX();
}

// private void InitializeUX() [instance] :99
void BasicSwipeToggleBigTest::InitializeUX()
{
    uStackFrame __("BasicSwipeToggleBigTest", "InitializeUX()");
    ::g::Fuse::Reactive::Constant* temp3 = ::g::Fuse::Reactive::Constant::New1(this);
    swipe = ::g::Fuse::Gestures::SwipeGesture::New2();
    swipe_IsActive_inst = ::g::Haslaamispaivakirja_FuseGesturesSwipeGesture_IsActive_Property::New1(swipe, BasicSwipeToggleBigTest::__selector0_);
    ::g::Fuse::Reactive::Property* temp4 = ::g::Fuse::Reactive::Property::New1(temp3, ::g::Haslaamispaivakirja_accessor_BasicSwipeToggleBigTest_IsActive::Singleton());
    handle = ::g::Fuse::Controls::Rectangle::New3();
    handle_Color_inst = ::g::Haslaamispaivakirja_FuseControlsShape_Color_Property::New1(handle, BasicSwipeToggleBigTest::__selector1_);
    ::g::Fuse::Reactive::Constant* temp5 = ::g::Fuse::Reactive::Constant::New1(this);
    background = ::g::Fuse::Controls::Rectangle::New3();
    background_Color_inst = ::g::Haslaamispaivakirja_FuseControlsShape_Color_Property::New1(background, BasicSwipeToggleBigTest::__selector1_);
    ::g::Fuse::Reactive::Constant* temp6 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Animations::Change* temp = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<float4>*/], handle_Color_inst);
    temp_Value_inst = ::g::Haslaamispaivakirja_FuseAnimationsChangefloat4_Value_Property::New1(temp, BasicSwipeToggleBigTest::__selector2_);
    ::g::Fuse::Reactive::Property* temp7 = ::g::Fuse::Reactive::Property::New1(temp5, ::g::Haslaamispaivakirja_accessor_BasicSwipeToggleBigTest_SecondaryColor::Singleton());
    ::g::Fuse::Animations::Change* temp1 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<float4>*/], background_Color_inst);
    temp1_Value_inst = ::g::Haslaamispaivakirja_FuseAnimationsChangefloat4_Value_Property::New1(temp1, BasicSwipeToggleBigTest::__selector2_);
    ::g::Fuse::Reactive::Property* temp8 = ::g::Fuse::Reactive::Property::New1(temp6, ::g::Haslaamispaivakirja_accessor_BasicSwipeToggleBigTest_PrimaryColor::Singleton());
    this_Sendable_inst = ::g::Haslaamispaivakirja_BasicSwipeToggleBigTest_Sendable_Property::New1(this, BasicSwipeToggleBigTest::__selector3_);
    ::g::Fuse::Reactive::Constant* temp9 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"isOn"*/]);
    ::g::Fuse::Triggers::Actions::Set* temp2 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<bool>*/], this_Sendable_inst);
    temp2_Value_inst = ::g::Haslaamispaivakirja_FuseTriggersActionsSetbool_Value_Property::New1(temp2, BasicSwipeToggleBigTest::__selector2_);
    ::g::Fuse::Reactive::Property* temp11 = ::g::Fuse::Reactive::Property::New1(temp9, ::g::Haslaamispaivakirja_accessor_BasicSwipeToggleBigTest_IsActive::Singleton());
    ::g::Fuse::Reactive::Constant* temp12 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Reactive::Property* temp13 = ::g::Fuse::Reactive::Property::New1(temp12, ::g::Haslaamispaivakirja_accessor_BasicSwipeToggleBigTest_PrimaryColor::Singleton());
    ::g::Fuse::Reactive::Constant* temp14 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Reactive::Property* temp15 = ::g::Fuse::Reactive::Property::New1(temp14, ::g::Haslaamispaivakirja_accessor_BasicSwipeToggleBigTest_SecondaryColor::Singleton());
    ::g::Fuse::Reactive::Data* temp16 = ::g::Fuse::Reactive::Data::New1(::STRINGS[8/*"isOnVal"*/]);
    ::g::Fuse::Reactive::DataBinding* temp17 = ::g::Fuse::Reactive::DataBinding::New1(swipe_IsActive_inst, (uObject*)temp4, 3);
    ::g::Fuse::Gestures::SwipingAnimation* temp18 = ::g::Fuse::Gestures::SwipingAnimation::New2(swipe);
    ::g::Fuse::Animations::Move* temp19 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Reactive::DataBinding* temp20 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp7, 1);
    ::g::Fuse::Reactive::DataBinding* temp21 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp8, 1);
    ::g::Fuse::Gestures::Clicked* temp22 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Gestures::ToggleSwipeActive* temp23 = ::g::Fuse::Gestures::ToggleSwipeActive::New2();
    TheClick = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb16 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp10);
    ::g::Fuse::Reactive::DataBinding* temp24 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp11, 3);
    ::g::Fuse::Controls::Shadow* temp25 = ::g::Fuse::Controls::Shadow::New2();
    ::g::fa_times* temp26 = ::g::fa_times::New4();
    ::g::Fuse::Reactive::DataBinding* temp27 = ::g::Fuse::Reactive::DataBinding::New1(handle_Color_inst, (uObject*)temp13, 1);
    ::g::Fuse::Reactive::DataBinding* temp28 = ::g::Fuse::Reactive::DataBinding::New1(background_Color_inst, (uObject*)temp15, 1);
    ::g::Fuse::Reactive::DataBinding* temp29 = ::g::Fuse::Reactive::DataBinding::New1(this_Sendable_inst, (uObject*)temp16, 3);
    PrimaryColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    SecondaryColor(::g::Uno::Float4__New2(0.07058824f, 0.372549f, 0.3882353f, 1.0f));
    Opacity1(0.7f);
    Width(::g::Uno::UX::Size__New1(80.0f, 1));
    Height(::g::Uno::UX::Size__New1(34.0f, 1));
    SourceLineNumber(1);
    SourceFileName(::STRINGS[9/*"Components/...*/]);
    uPtr(swipe)->Type(1);
    uPtr(swipe)->Direction(2);
    uPtr(swipe)->Length(46.0f);
    uPtr(swipe)->Name(BasicSwipeToggleBigTest::__selector4_);
    uPtr(swipe)->SourceLineNumber(8);
    uPtr(swipe)->SourceFileName(::STRINGS[9/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(swipe)->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp17);
    temp4->SourceLineNumber(8);
    temp4->SourceFileName(::STRINGS[9/*"Components/...*/]);
    temp3->SourceLineNumber(8);
    temp3->SourceFileName(::STRINGS[9/*"Components/...*/]);
    temp18->SourceLineNumber(9);
    temp18->SourceFileName(::STRINGS[9/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Animators()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Animators()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Animators()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp21);
    temp19->X(46.0f);
    temp19->Target(handle);
    temp7->SourceLineNumber(11);
    temp7->SourceFileName(::STRINGS[9/*"Components/...*/]);
    temp5->SourceLineNumber(11);
    temp5->SourceFileName(::STRINGS[9/*"Components/...*/]);
    temp8->SourceLineNumber(12);
    temp8->SourceFileName(::STRINGS[9/*"Components/...*/]);
    temp6->SourceLineNumber(12);
    temp6->SourceFileName(::STRINGS[9/*"Components/...*/]);
    temp22->SourceLineNumber(15);
    temp22->SourceFileName(::STRINGS[9/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), TheClick);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp24);
    temp23->SourceLineNumber(16);
    temp23->SourceFileName(::STRINGS[9/*"Components/...*/]);
    temp23->Target(swipe);
    uPtr(TheClick)->SourceLineNumber(17);
    uPtr(TheClick)->SourceFileName(::STRINGS[9/*"Components/...*/]);
    uPtr(TheClick)->add_Handler(uDelegate::New(::TYPES[5/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb16)));
    temp10->SourceLineNumber(17);
    temp10->SourceFileName(::STRINGS[9/*"Components/...*/]);
    temp2->SourceLineNumber(18);
    temp2->SourceFileName(::STRINGS[9/*"Components/...*/]);
    temp11->SourceLineNumber(18);
    temp11->SourceFileName(::STRINGS[9/*"Components/...*/]);
    temp9->SourceLineNumber(18);
    temp9->SourceFileName(::STRINGS[9/*"Components/...*/]);
    uPtr(handle)->CornerRadius(::g::Uno::Float4__New2(28.0f, 28.0f, 28.0f, 28.0f));
    uPtr(handle)->Width(::g::Uno::UX::Size__New1(28.0f, 1));
    uPtr(handle)->Alignment(1);
    uPtr(handle)->Margin(::g::Uno::Float4__New2(3.0f, 3.0f, 3.0f, 3.0f));
    uPtr(handle)->Name(BasicSwipeToggleBigTest::__selector5_);
    uPtr(handle)->SourceLineNumber(26);
    uPtr(handle)->SourceFileName(::STRINGS[9/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(handle)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(handle)->Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(handle)->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp27);
    temp25->Distance(1.0f);
    temp25->Size(1.0f);
    temp25->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.2666667f));
    temp25->SourceLineNumber(27);
    temp25->SourceFileName(::STRINGS[9/*"Components/...*/]);
    temp26->FontSize(18.0f);
    temp26->TextAlignment(1);
    temp26->Color(::g::Uno::Float4__New2(0.07058824f, 0.372549f, 0.3882353f, 1.0f));
    temp26->Alignment(10);
    temp26->Margin(::g::Uno::Float4__New2(-1.0f, 1.0f, 0.0f, 0.0f));
    temp26->SourceLineNumber(28);
    temp26->SourceFileName(::STRINGS[9/*"Components/...*/]);
    temp13->SourceLineNumber(26);
    temp13->SourceFileName(::STRINGS[9/*"Components/...*/]);
    temp12->SourceLineNumber(26);
    temp12->SourceFileName(::STRINGS[9/*"Components/...*/]);
    uPtr(background)->CornerRadius(::g::Uno::Float4__New2(28.0f, 28.0f, 28.0f, 28.0f));
    uPtr(background)->Alignment(0);
    uPtr(background)->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(background)->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(background)->Opacity(1.0f);
    uPtr(background)->Layer(1);
    uPtr(background)->Name(BasicSwipeToggleBigTest::__selector6_);
    uPtr(background)->SourceLineNumber(31);
    uPtr(background)->SourceFileName(::STRINGS[9/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(background)->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp28);
    temp15->SourceLineNumber(31);
    temp15->SourceFileName(::STRINGS[9/*"Components/...*/]);
    temp14->SourceLineNumber(31);
    temp14->SourceFileName(::STRINGS[9/*"Components/...*/]);
    temp16->SourceLineNumber(1);
    temp16->SourceFileName(::STRINGS[9/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), swipe);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), handle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Node>*/]), background);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp29);
}

// public bool get_IsActive() [instance] :68
bool BasicSwipeToggleBigTest::IsActive()
{
    return _field_IsActive;
}

// public void set_IsActive(bool value) [instance] :69
void BasicSwipeToggleBigTest::IsActive(bool value)
{
    uStackFrame __("BasicSwipeToggleBigTest", "set_IsActive(bool)");
    SetIsActive(value, NULL);
}

// public float get_Opacity() [instance] :53
float BasicSwipeToggleBigTest::Opacity1()
{
    return _field_Opacity;
}

// public void set_Opacity(float value) [instance] :54
void BasicSwipeToggleBigTest::Opacity1(float value)
{
    uStackFrame __("BasicSwipeToggleBigTest", "set_Opacity(float)");
    SetOpacity1(value, NULL);
}

// public float4 get_PrimaryColor() [instance] :23
::g::Uno::Float4 BasicSwipeToggleBigTest::PrimaryColor()
{
    return _field_PrimaryColor;
}

// public void set_PrimaryColor(float4 value) [instance] :24
void BasicSwipeToggleBigTest::PrimaryColor(::g::Uno::Float4 value)
{
    uStackFrame __("BasicSwipeToggleBigTest", "set_PrimaryColor(float4)");
    SetPrimaryColor(value, NULL);
}

// public float4 get_SecondaryColor() [instance] :38
::g::Uno::Float4 BasicSwipeToggleBigTest::SecondaryColor()
{
    return _field_SecondaryColor;
}

// public void set_SecondaryColor(float4 value) [instance] :39
void BasicSwipeToggleBigTest::SecondaryColor(::g::Uno::Float4 value)
{
    uStackFrame __("BasicSwipeToggleBigTest", "set_SecondaryColor(float4)");
    SetSecondaryColor(value, NULL);
}

// public bool get_Sendable() [instance] :8
bool BasicSwipeToggleBigTest::Sendable()
{
    return _field_Sendable;
}

// public void set_Sendable(bool value) [instance] :9
void BasicSwipeToggleBigTest::Sendable(bool value)
{
    uStackFrame __("BasicSwipeToggleBigTest", "set_Sendable(bool)");
    SetSendable(value, NULL);
}

// public void SetIsActive(bool value, Uno.UX.IPropertyListener origin) [instance] :71
void BasicSwipeToggleBigTest::SetIsActive(bool value, uObject* origin)
{
    uStackFrame __("BasicSwipeToggleBigTest", "SetIsActive(bool,Uno.UX.IPropertyListener)");

    if (value != _field_IsActive)
    {
        _field_IsActive = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"IsActive"*/]), origin);
    }
}

// public void SetOpacity(float value, Uno.UX.IPropertyListener origin) [instance] :56
void BasicSwipeToggleBigTest::SetOpacity1(float value, uObject* origin)
{
    uStackFrame __("BasicSwipeToggleBigTest", "SetOpacity(float,Uno.UX.IPropertyListener)");

    if (value != _field_Opacity)
    {
        _field_Opacity = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[10/*"Opacity"*/]), origin);
    }
}

// public void SetPrimaryColor(float4 value, Uno.UX.IPropertyListener origin) [instance] :26
void BasicSwipeToggleBigTest::SetPrimaryColor(::g::Uno::Float4 value, uObject* origin)
{
    uStackFrame __("BasicSwipeToggleBigTest", "SetPrimaryColor(float4,Uno.UX.IPropertyListener)");

    if (::g::Uno::Float4__op_Inequality(value, _field_PrimaryColor))
    {
        _field_PrimaryColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[11/*"PrimaryColor"*/]), origin);
    }
}

// public void SetSecondaryColor(float4 value, Uno.UX.IPropertyListener origin) [instance] :41
void BasicSwipeToggleBigTest::SetSecondaryColor(::g::Uno::Float4 value, uObject* origin)
{
    uStackFrame __("BasicSwipeToggleBigTest", "SetSecondaryColor(float4,Uno.UX.IPropertyListener)");

    if (::g::Uno::Float4__op_Inequality(value, _field_SecondaryColor))
    {
        _field_SecondaryColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[12/*"SecondaryCo...*/]), origin);
    }
}

// public void SetSendable(bool value, Uno.UX.IPropertyListener origin) [instance] :11
void BasicSwipeToggleBigTest::SetSendable(bool value, uObject* origin)
{
    uStackFrame __("BasicSwipeToggleBigTest", "SetSendable(bool,Uno.UX.IPropertyListener)");

    if (value != _field_Sendable)
    {
        _field_Sendable = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"Sendable"*/]), origin);
    }
}

// public BasicSwipeToggleBigTest New() [static] :95
BasicSwipeToggleBigTest* BasicSwipeToggleBigTest::New4()
{
    BasicSwipeToggleBigTest* obj1 = (BasicSwipeToggleBigTest*)uNew(BasicSwipeToggleBigTest_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

} // ::g
