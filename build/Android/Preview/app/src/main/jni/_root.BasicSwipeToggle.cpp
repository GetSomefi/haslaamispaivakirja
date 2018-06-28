// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/build/Android/Preview/cache/ux15/BasicSwipeToggle.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.BasicSwipeToggle.h>
#include <_root.fa_times.h>
#include <_root.Haslaamispaivak-1d63fb9.h>
#include <_root.Haslaamispaivak-2263447d.h>
#include <_root.Haslaamispaivak-5fc8c6f7.h>
#include <_root.Haslaamispaivak-872d924b.h>
#include <_root.Haslaamispaivak-bdf24412.h>
#include <_root.Haslaamispaivak-c6b8fa38.h>
#include <_root.Haslaamispaivak-e23a789.h>
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
static uString* STRINGS[11];
static uType* TYPES[6];

namespace g{

// public partial sealed class BasicSwipeToggle :2
// {
// static BasicSwipeToggle() :75
static void BasicSwipeToggle__cctor_4_fn(uType* __type)
{
    BasicSwipeToggle::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"IsActive"*/]);
    BasicSwipeToggle::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"Color"*/]);
    BasicSwipeToggle::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"Value"*/]);
    BasicSwipeToggle::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"swipe"*/]);
    BasicSwipeToggle::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[4/*"handle"*/]);
    BasicSwipeToggle::__selector5_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[5/*"background"*/]);
}

static void BasicSwipeToggle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("IsActive");
    ::STRINGS[1] = uString::Const("Color");
    ::STRINGS[2] = uString::Const("Value");
    ::STRINGS[3] = uString::Const("swipe");
    ::STRINGS[4] = uString::Const("handle");
    ::STRINGS[5] = uString::Const("background");
    ::STRINGS[6] = uString::Const("isThisActive");
    ::STRINGS[7] = uString::Const("Components/BasicSwipeToggle.ux");
    ::STRINGS[8] = uString::Const("Opacity");
    ::STRINGS[9] = uString::Const("PrimaryColor");
    ::STRINGS[10] = uString::Const("SecondaryColor");
    ::TYPES[0] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetDependencies(
        ::g::Haslaamispaivakirja_accessor_BasicSwipeToggle_IsActive_typeof(),
        ::g::Haslaamispaivakirja_accessor_BasicSwipeToggle_PrimaryColor_typeof(),
        ::g::Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(120,
        ::g::Uno::Float4_typeof(), offsetof(BasicSwipeToggle, _field_PrimaryColor), 0,
        ::g::Uno::Float4_typeof(), offsetof(BasicSwipeToggle, _field_SecondaryColor), 0,
        ::g::Uno::Float_typeof(), offsetof(BasicSwipeToggle, _field_Opacity), 0,
        ::g::Uno::Bool_typeof(), offsetof(BasicSwipeToggle, _field_IsActive), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(BasicSwipeToggle, swipe_IsActive_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(BasicSwipeToggle, handle_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(BasicSwipeToggle, background_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(BasicSwipeToggle, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(BasicSwipeToggle, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(BasicSwipeToggle, TheClick_IsActive_inst), 0,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(BasicSwipeToggle, swipe), 0,
        ::g::Fuse::Triggers::Actions::Callback_typeof(), offsetof(BasicSwipeToggle, TheClick), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(BasicSwipeToggle, temp_eb14), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(BasicSwipeToggle, handle), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(BasicSwipeToggle, background), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BasicSwipeToggle::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BasicSwipeToggle::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BasicSwipeToggle::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BasicSwipeToggle::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BasicSwipeToggle::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BasicSwipeToggle::__selector5_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(13,
        new uFunction("get_IsActive", NULL, (void*)BasicSwipeToggle__get_IsActive_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsActive", NULL, (void*)BasicSwipeToggle__set_IsActive_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)BasicSwipeToggle__New4_fn, 0, true, type, 0),
        new uFunction("get_Opacity", NULL, (void*)BasicSwipeToggle__get_Opacity1_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Opacity", NULL, (void*)BasicSwipeToggle__set_Opacity1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_PrimaryColor", NULL, (void*)BasicSwipeToggle__get_PrimaryColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_PrimaryColor", NULL, (void*)BasicSwipeToggle__set_PrimaryColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_SecondaryColor", NULL, (void*)BasicSwipeToggle__get_SecondaryColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_SecondaryColor", NULL, (void*)BasicSwipeToggle__set_SecondaryColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("SetIsActive", NULL, (void*)BasicSwipeToggle__SetIsActive_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetOpacity", NULL, (void*)BasicSwipeToggle__SetOpacity1_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetPrimaryColor", NULL, (void*)BasicSwipeToggle__SetPrimaryColor_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetSecondaryColor", NULL, (void*)BasicSwipeToggle__SetSecondaryColor_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::UX::IPropertyListener_typeof()));
}

::g::Fuse::Controls::Panel_type* BasicSwipeToggle_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 141;
    options.InterfaceCount = 19;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(BasicSwipeToggle);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("BasicSwipeToggle", options);
    type->fp_build_ = BasicSwipeToggle_build;
    type->fp_ctor_ = (void*)BasicSwipeToggle__New4_fn;
    type->fp_cctor_ = BasicSwipeToggle__cctor_4_fn;
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

// public BasicSwipeToggle() :79
void BasicSwipeToggle__ctor_7_fn(BasicSwipeToggle* __this)
{
    __this->ctor_7();
}

// private void InitializeUX() :83
void BasicSwipeToggle__InitializeUX_fn(BasicSwipeToggle* __this)
{
    __this->InitializeUX();
}

// public bool get_IsActive() :53
void BasicSwipeToggle__get_IsActive_fn(BasicSwipeToggle* __this, bool* __retval)
{
    *__retval = __this->IsActive();
}

// public void set_IsActive(bool value) :54
void BasicSwipeToggle__set_IsActive_fn(BasicSwipeToggle* __this, bool* value)
{
    __this->IsActive(*value);
}

// public BasicSwipeToggle New() :79
void BasicSwipeToggle__New4_fn(BasicSwipeToggle** __retval)
{
    *__retval = BasicSwipeToggle::New4();
}

// public float get_Opacity() :38
void BasicSwipeToggle__get_Opacity1_fn(BasicSwipeToggle* __this, float* __retval)
{
    *__retval = __this->Opacity1();
}

// public void set_Opacity(float value) :39
void BasicSwipeToggle__set_Opacity1_fn(BasicSwipeToggle* __this, float* value)
{
    __this->Opacity1(*value);
}

// public float4 get_PrimaryColor() :8
void BasicSwipeToggle__get_PrimaryColor_fn(BasicSwipeToggle* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->PrimaryColor();
}

// public void set_PrimaryColor(float4 value) :9
void BasicSwipeToggle__set_PrimaryColor_fn(BasicSwipeToggle* __this, ::g::Uno::Float4* value)
{
    __this->PrimaryColor(*value);
}

// public float4 get_SecondaryColor() :23
void BasicSwipeToggle__get_SecondaryColor_fn(BasicSwipeToggle* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->SecondaryColor();
}

// public void set_SecondaryColor(float4 value) :24
void BasicSwipeToggle__set_SecondaryColor_fn(BasicSwipeToggle* __this, ::g::Uno::Float4* value)
{
    __this->SecondaryColor(*value);
}

// public void SetIsActive(bool value, Uno.UX.IPropertyListener origin) :56
void BasicSwipeToggle__SetIsActive_fn(BasicSwipeToggle* __this, bool* value, uObject* origin)
{
    __this->SetIsActive(*value, origin);
}

// public void SetOpacity(float value, Uno.UX.IPropertyListener origin) :41
void BasicSwipeToggle__SetOpacity1_fn(BasicSwipeToggle* __this, float* value, uObject* origin)
{
    __this->SetOpacity1(*value, origin);
}

// public void SetPrimaryColor(float4 value, Uno.UX.IPropertyListener origin) :11
void BasicSwipeToggle__SetPrimaryColor_fn(BasicSwipeToggle* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetPrimaryColor(*value, origin);
}

// public void SetSecondaryColor(float4 value, Uno.UX.IPropertyListener origin) :26
void BasicSwipeToggle__SetSecondaryColor_fn(BasicSwipeToggle* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetSecondaryColor(*value, origin);
}

::g::Uno::UX::Selector BasicSwipeToggle::__selector0_;
::g::Uno::UX::Selector BasicSwipeToggle::__selector1_;
::g::Uno::UX::Selector BasicSwipeToggle::__selector2_;
::g::Uno::UX::Selector BasicSwipeToggle::__selector3_;
::g::Uno::UX::Selector BasicSwipeToggle::__selector4_;
::g::Uno::UX::Selector BasicSwipeToggle::__selector5_;

// public BasicSwipeToggle() [instance] :79
void BasicSwipeToggle::ctor_7()
{
    uStackFrame __("BasicSwipeToggle", ".ctor()");
    ctor_6();
    InitializeUX();
}

// private void InitializeUX() [instance] :83
void BasicSwipeToggle::InitializeUX()
{
    uStackFrame __("BasicSwipeToggle", "InitializeUX()");
    ::g::Fuse::Reactive::Constant* temp2 = ::g::Fuse::Reactive::Constant::New1(this);
    swipe = ::g::Fuse::Gestures::SwipeGesture::New2();
    swipe_IsActive_inst = ::g::Haslaamispaivakirja_FuseGesturesSwipeGesture_IsActive_Property::New1(swipe, BasicSwipeToggle::__selector0_);
    ::g::Fuse::Reactive::Property* temp3 = ::g::Fuse::Reactive::Property::New1(temp2, ::g::Haslaamispaivakirja_accessor_BasicSwipeToggle_IsActive::Singleton());
    handle = ::g::Fuse::Controls::Rectangle::New3();
    handle_Color_inst = ::g::Haslaamispaivakirja_FuseControlsShape_Color_Property::New1(handle, BasicSwipeToggle::__selector1_);
    ::g::Fuse::Reactive::Constant* temp4 = ::g::Fuse::Reactive::Constant::New1(this);
    background = ::g::Fuse::Controls::Rectangle::New3();
    background_Color_inst = ::g::Haslaamispaivakirja_FuseControlsShape_Color_Property::New1(background, BasicSwipeToggle::__selector1_);
    ::g::Fuse::Reactive::Constant* temp5 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Animations::Change* temp = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<float4>*/], handle_Color_inst);
    temp_Value_inst = ::g::Haslaamispaivakirja_FuseAnimationsChangefloat4_Value_Property::New1(temp, BasicSwipeToggle::__selector2_);
    ::g::Fuse::Reactive::Property* temp6 = ::g::Fuse::Reactive::Property::New1(temp4, ::g::Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor::Singleton());
    ::g::Fuse::Animations::Change* temp1 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<float4>*/], background_Color_inst);
    temp1_Value_inst = ::g::Haslaamispaivakirja_FuseAnimationsChangefloat4_Value_Property::New1(temp1, BasicSwipeToggle::__selector2_);
    ::g::Fuse::Reactive::Property* temp7 = ::g::Fuse::Reactive::Property::New1(temp5, ::g::Haslaamispaivakirja_accessor_BasicSwipeToggle_PrimaryColor::Singleton());
    ::g::Fuse::Reactive::Constant* temp8 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"isThisActive"*/]);
    TheClick = ::g::Fuse::Triggers::Actions::Callback::New2();
    TheClick_IsActive_inst = ::g::Haslaamispaivakirja_FuseTriggersActionsTriggerAction_IsActive_Property::New1(TheClick, BasicSwipeToggle::__selector0_);
    ::g::Fuse::Reactive::Property* temp10 = ::g::Fuse::Reactive::Property::New1(temp8, ::g::Haslaamispaivakirja_accessor_BasicSwipeToggle_IsActive::Singleton());
    ::g::Fuse::Reactive::Constant* temp11 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Reactive::Property* temp12 = ::g::Fuse::Reactive::Property::New1(temp11, ::g::Haslaamispaivakirja_accessor_BasicSwipeToggle_PrimaryColor::Singleton());
    ::g::Fuse::Reactive::Constant* temp13 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Reactive::Property* temp14 = ::g::Fuse::Reactive::Property::New1(temp13, ::g::Haslaamispaivakirja_accessor_BasicSwipeToggle_SecondaryColor::Singleton());
    ::g::Fuse::Reactive::DataBinding* temp15 = ::g::Fuse::Reactive::DataBinding::New1(swipe_IsActive_inst, (uObject*)temp3, 3);
    ::g::Fuse::Gestures::SwipingAnimation* temp16 = ::g::Fuse::Gestures::SwipingAnimation::New2(swipe);
    ::g::Fuse::Animations::Move* temp17 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Reactive::DataBinding* temp18 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp6, 1);
    ::g::Fuse::Reactive::DataBinding* temp19 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp7, 1);
    ::g::Fuse::Gestures::Clicked* temp20 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Gestures::ToggleSwipeActive* temp21 = ::g::Fuse::Gestures::ToggleSwipeActive::New2();
    temp_eb14 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp9);
    ::g::Fuse::Reactive::DataBinding* temp22 = ::g::Fuse::Reactive::DataBinding::New1(TheClick_IsActive_inst, (uObject*)temp10, 3);
    ::g::Fuse::Controls::Shadow* temp23 = ::g::Fuse::Controls::Shadow::New2();
    ::g::fa_times* temp24 = ::g::fa_times::New4();
    ::g::Fuse::Reactive::DataBinding* temp25 = ::g::Fuse::Reactive::DataBinding::New1(handle_Color_inst, (uObject*)temp12, 1);
    ::g::Fuse::Reactive::DataBinding* temp26 = ::g::Fuse::Reactive::DataBinding::New1(background_Color_inst, (uObject*)temp14, 1);
    PrimaryColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    SecondaryColor(::g::Uno::Float4__New2(0.07058824f, 0.372549f, 0.3882353f, 1.0f));
    Opacity1(0.7f);
    Width(::g::Uno::UX::Size__New1(60.0f, 1));
    Height(::g::Uno::UX::Size__New1(26.0f, 1));
    SourceLineNumber(1);
    SourceFileName(::STRINGS[7/*"Components/...*/]);
    uPtr(swipe)->Type(1);
    uPtr(swipe)->Direction(2);
    uPtr(swipe)->Length(34.0f);
    uPtr(swipe)->Name(BasicSwipeToggle::__selector3_);
    uPtr(swipe)->SourceLineNumber(7);
    uPtr(swipe)->SourceFileName(::STRINGS[7/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(swipe)->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp15);
    temp3->SourceLineNumber(7);
    temp3->SourceFileName(::STRINGS[7/*"Components/...*/]);
    temp2->SourceLineNumber(7);
    temp2->SourceFileName(::STRINGS[7/*"Components/...*/]);
    temp16->SourceLineNumber(8);
    temp16->SourceFileName(::STRINGS[7/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp19);
    temp17->X(34.0f);
    temp17->Target(handle);
    temp6->SourceLineNumber(10);
    temp6->SourceFileName(::STRINGS[7/*"Components/...*/]);
    temp4->SourceLineNumber(10);
    temp4->SourceFileName(::STRINGS[7/*"Components/...*/]);
    temp7->SourceLineNumber(11);
    temp7->SourceFileName(::STRINGS[7/*"Components/...*/]);
    temp5->SourceLineNumber(11);
    temp5->SourceFileName(::STRINGS[7/*"Components/...*/]);
    temp20->SourceLineNumber(14);
    temp20->SourceFileName(::STRINGS[7/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), TheClick);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp22);
    temp21->SourceLineNumber(15);
    temp21->SourceFileName(::STRINGS[7/*"Components/...*/]);
    temp21->Target(swipe);
    uPtr(TheClick)->SourceLineNumber(16);
    uPtr(TheClick)->SourceFileName(::STRINGS[7/*"Components/...*/]);
    uPtr(TheClick)->add_Handler(uDelegate::New(::TYPES[4/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb14)));
    temp9->SourceLineNumber(16);
    temp9->SourceFileName(::STRINGS[7/*"Components/...*/]);
    temp10->SourceLineNumber(16);
    temp10->SourceFileName(::STRINGS[7/*"Components/...*/]);
    temp8->SourceLineNumber(16);
    temp8->SourceFileName(::STRINGS[7/*"Components/...*/]);
    uPtr(handle)->CornerRadius(::g::Uno::Float4__New2(28.0f, 28.0f, 28.0f, 28.0f));
    uPtr(handle)->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    uPtr(handle)->Alignment(1);
    uPtr(handle)->Margin(::g::Uno::Float4__New2(3.0f, 3.0f, 3.0f, 3.0f));
    uPtr(handle)->Name(BasicSwipeToggle::__selector4_);
    uPtr(handle)->SourceLineNumber(19);
    uPtr(handle)->SourceFileName(::STRINGS[7/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(handle)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(handle)->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(handle)->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp25);
    temp23->Distance(1.0f);
    temp23->Size(1.0f);
    temp23->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.2666667f));
    temp23->SourceLineNumber(20);
    temp23->SourceFileName(::STRINGS[7/*"Components/...*/]);
    temp24->FontSize(18.0f);
    temp24->TextAlignment(1);
    temp24->Color(::g::Uno::Float4__New2(0.07058824f, 0.372549f, 0.3882353f, 1.0f));
    temp24->Alignment(10);
    temp24->Margin(::g::Uno::Float4__New2(-1.0f, 1.0f, 0.0f, 0.0f));
    temp24->SourceLineNumber(21);
    temp24->SourceFileName(::STRINGS[7/*"Components/...*/]);
    temp12->SourceLineNumber(19);
    temp12->SourceFileName(::STRINGS[7/*"Components/...*/]);
    temp11->SourceLineNumber(19);
    temp11->SourceFileName(::STRINGS[7/*"Components/...*/]);
    uPtr(background)->CornerRadius(::g::Uno::Float4__New2(28.0f, 28.0f, 28.0f, 28.0f));
    uPtr(background)->Alignment(0);
    uPtr(background)->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(background)->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(background)->Opacity(1.0f);
    uPtr(background)->Layer(1);
    uPtr(background)->Name(BasicSwipeToggle::__selector5_);
    uPtr(background)->SourceLineNumber(24);
    uPtr(background)->SourceFileName(::STRINGS[7/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(background)->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp26);
    temp14->SourceLineNumber(24);
    temp14->SourceFileName(::STRINGS[7/*"Components/...*/]);
    temp13->SourceLineNumber(24);
    temp13->SourceFileName(::STRINGS[7/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), swipe);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), handle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), background);
}

// public bool get_IsActive() [instance] :53
bool BasicSwipeToggle::IsActive()
{
    return _field_IsActive;
}

// public void set_IsActive(bool value) [instance] :54
void BasicSwipeToggle::IsActive(bool value)
{
    uStackFrame __("BasicSwipeToggle", "set_IsActive(bool)");
    SetIsActive(value, NULL);
}

// public float get_Opacity() [instance] :38
float BasicSwipeToggle::Opacity1()
{
    return _field_Opacity;
}

// public void set_Opacity(float value) [instance] :39
void BasicSwipeToggle::Opacity1(float value)
{
    uStackFrame __("BasicSwipeToggle", "set_Opacity(float)");
    SetOpacity1(value, NULL);
}

// public float4 get_PrimaryColor() [instance] :8
::g::Uno::Float4 BasicSwipeToggle::PrimaryColor()
{
    return _field_PrimaryColor;
}

// public void set_PrimaryColor(float4 value) [instance] :9
void BasicSwipeToggle::PrimaryColor(::g::Uno::Float4 value)
{
    uStackFrame __("BasicSwipeToggle", "set_PrimaryColor(float4)");
    SetPrimaryColor(value, NULL);
}

// public float4 get_SecondaryColor() [instance] :23
::g::Uno::Float4 BasicSwipeToggle::SecondaryColor()
{
    return _field_SecondaryColor;
}

// public void set_SecondaryColor(float4 value) [instance] :24
void BasicSwipeToggle::SecondaryColor(::g::Uno::Float4 value)
{
    uStackFrame __("BasicSwipeToggle", "set_SecondaryColor(float4)");
    SetSecondaryColor(value, NULL);
}

// public void SetIsActive(bool value, Uno.UX.IPropertyListener origin) [instance] :56
void BasicSwipeToggle::SetIsActive(bool value, uObject* origin)
{
    uStackFrame __("BasicSwipeToggle", "SetIsActive(bool,Uno.UX.IPropertyListener)");

    if (value != _field_IsActive)
    {
        _field_IsActive = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"IsActive"*/]), origin);
    }
}

// public void SetOpacity(float value, Uno.UX.IPropertyListener origin) [instance] :41
void BasicSwipeToggle::SetOpacity1(float value, uObject* origin)
{
    uStackFrame __("BasicSwipeToggle", "SetOpacity(float,Uno.UX.IPropertyListener)");

    if (value != _field_Opacity)
    {
        _field_Opacity = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[8/*"Opacity"*/]), origin);
    }
}

// public void SetPrimaryColor(float4 value, Uno.UX.IPropertyListener origin) [instance] :11
void BasicSwipeToggle::SetPrimaryColor(::g::Uno::Float4 value, uObject* origin)
{
    uStackFrame __("BasicSwipeToggle", "SetPrimaryColor(float4,Uno.UX.IPropertyListener)");

    if (::g::Uno::Float4__op_Inequality(value, _field_PrimaryColor))
    {
        _field_PrimaryColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[9/*"PrimaryColor"*/]), origin);
    }
}

// public void SetSecondaryColor(float4 value, Uno.UX.IPropertyListener origin) [instance] :26
void BasicSwipeToggle::SetSecondaryColor(::g::Uno::Float4 value, uObject* origin)
{
    uStackFrame __("BasicSwipeToggle", "SetSecondaryColor(float4,Uno.UX.IPropertyListener)");

    if (::g::Uno::Float4__op_Inequality(value, _field_SecondaryColor))
    {
        _field_SecondaryColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[10/*"SecondaryCo...*/]), origin);
    }
}

// public BasicSwipeToggle New() [static] :79
BasicSwipeToggle* BasicSwipeToggle::New4()
{
    BasicSwipeToggle* obj1 = (BasicSwipeToggle*)uNew(BasicSwipeToggle_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

} // ::g
