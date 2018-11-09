// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/textDropDown_toimimaton.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.textDropDown_to-6dc1363c.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.String.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[10];
static uType* TYPES[1];

namespace g{

// public partial sealed class textDropDown_toimimaton.listBtnCode :56
// {
// static listBtnCode() :153
static void textDropDown_toimimaton__listBtnCode__cctor_4_fn(uType* __type)
{
    textDropDown_toimimaton__listBtnCode::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[0/*"btnBackground"*/], ::STRINGS[1/*"btnText"*/]);
    textDropDown_toimimaton__listBtnCode::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"Text"*/]);
    textDropDown_toimimaton__listBtnCode::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"DataKey"*/]);
    textDropDown_toimimaton__listBtnCode::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[4/*"BgColor"*/]);
    textDropDown_toimimaton__listBtnCode::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[5/*"SelectedBgC...*/]);
    textDropDown_toimimaton__listBtnCode::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[6/*"FontSize"*/]);
    textDropDown_toimimaton__listBtnCode::__selector5_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[7/*"Color"*/]);
    textDropDown_toimimaton__listBtnCode::__selector6_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[8/*"Value"*/]);
    textDropDown_toimimaton__listBtnCode::__selector7_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[9/*"listBtnCode"*/]);
    textDropDown_toimimaton__listBtnCode::__selector8_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"btnBackground"*/]);
    textDropDown_toimimaton__listBtnCode::__selector9_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"btnText"*/]);
}

static void textDropDown_toimimaton__listBtnCode_build(uType* type)
{
    ::STRINGS[0] = uString::Const("btnBackground");
    ::STRINGS[1] = uString::Const("btnText");
    ::STRINGS[2] = uString::Const("Text");
    ::STRINGS[3] = uString::Const("DataKey");
    ::STRINGS[4] = uString::Const("BgColor");
    ::STRINGS[5] = uString::Const("SelectedBgColor");
    ::STRINGS[6] = uString::Const("FontSize");
    ::STRINGS[7] = uString::Const("Color");
    ::STRINGS[8] = uString::Const("Value");
    ::STRINGS[9] = uString::Const("listBtnCode");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(115,
        ::g::Uno::String_typeof(), offsetof(textDropDown_toimimaton__listBtnCode, _field_Text), 0,
        ::g::Uno::String_typeof(), offsetof(textDropDown_toimimaton__listBtnCode, _field_DataKey), 0,
        ::g::Uno::String_typeof(), offsetof(textDropDown_toimimaton__listBtnCode, _field_BgColor), 0,
        ::g::Uno::String_typeof(), offsetof(textDropDown_toimimaton__listBtnCode, _field_SelectedBgColor), 0,
        ::g::Uno::Float_typeof(), offsetof(textDropDown_toimimaton__listBtnCode, _field_FontSize), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&textDropDown_toimimaton__listBtnCode::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown_toimimaton__listBtnCode::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown_toimimaton__listBtnCode::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown_toimimaton__listBtnCode::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown_toimimaton__listBtnCode::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown_toimimaton__listBtnCode::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown_toimimaton__listBtnCode::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown_toimimaton__listBtnCode::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown_toimimaton__listBtnCode::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown_toimimaton__listBtnCode::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&textDropDown_toimimaton__listBtnCode::__selector9_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* textDropDown_toimimaton__listBtnCode_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 131;
    options.InterfaceCount = 19;
    options.ObjectSize = sizeof(textDropDown_toimimaton__listBtnCode);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("textDropDown_toimimaton.listBtnCode", options);
    type->fp_build_ = textDropDown_toimimaton__listBtnCode_build;
    type->fp_cctor_ = textDropDown_toimimaton__listBtnCode__cctor_4_fn;
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

// public string get_BgColor() :92
void textDropDown_toimimaton__listBtnCode__get_BgColor_fn(textDropDown_toimimaton__listBtnCode* __this, uString** __retval)
{
    *__retval = __this->BgColor();
}

// public void set_BgColor(string value) :93
void textDropDown_toimimaton__listBtnCode__set_BgColor_fn(textDropDown_toimimaton__listBtnCode* __this, uString* value)
{
    __this->BgColor(value);
}

// public string get_DataKey() :77
void textDropDown_toimimaton__listBtnCode__get_DataKey_fn(textDropDown_toimimaton__listBtnCode* __this, uString** __retval)
{
    *__retval = __this->DataKey();
}

// public void set_DataKey(string value) :78
void textDropDown_toimimaton__listBtnCode__set_DataKey_fn(textDropDown_toimimaton__listBtnCode* __this, uString* value)
{
    __this->DataKey(value);
}

// public float get_FontSize() :122
void textDropDown_toimimaton__listBtnCode__get_FontSize_fn(textDropDown_toimimaton__listBtnCode* __this, float* __retval)
{
    *__retval = __this->FontSize();
}

// public void set_FontSize(float value) :123
void textDropDown_toimimaton__listBtnCode__set_FontSize_fn(textDropDown_toimimaton__listBtnCode* __this, float* value)
{
    __this->FontSize(*value);
}

// public string get_SelectedBgColor() :107
void textDropDown_toimimaton__listBtnCode__get_SelectedBgColor_fn(textDropDown_toimimaton__listBtnCode* __this, uString** __retval)
{
    *__retval = __this->SelectedBgColor();
}

// public void set_SelectedBgColor(string value) :108
void textDropDown_toimimaton__listBtnCode__set_SelectedBgColor_fn(textDropDown_toimimaton__listBtnCode* __this, uString* value)
{
    __this->SelectedBgColor(value);
}

// public void SetBgColor(string value, Uno.UX.IPropertyListener origin) :95
void textDropDown_toimimaton__listBtnCode__SetBgColor_fn(textDropDown_toimimaton__listBtnCode* __this, uString* value, uObject* origin)
{
    __this->SetBgColor(value, origin);
}

// public void SetDataKey(string value, Uno.UX.IPropertyListener origin) :80
void textDropDown_toimimaton__listBtnCode__SetDataKey_fn(textDropDown_toimimaton__listBtnCode* __this, uString* value, uObject* origin)
{
    __this->SetDataKey(value, origin);
}

// public void SetFontSize(float value, Uno.UX.IPropertyListener origin) :125
void textDropDown_toimimaton__listBtnCode__SetFontSize_fn(textDropDown_toimimaton__listBtnCode* __this, float* value, uObject* origin)
{
    __this->SetFontSize(*value, origin);
}

// public void SetSelectedBgColor(string value, Uno.UX.IPropertyListener origin) :110
void textDropDown_toimimaton__listBtnCode__SetSelectedBgColor_fn(textDropDown_toimimaton__listBtnCode* __this, uString* value, uObject* origin)
{
    __this->SetSelectedBgColor(value, origin);
}

// public void SetText(string value, Uno.UX.IPropertyListener origin) :65
void textDropDown_toimimaton__listBtnCode__SetText_fn(textDropDown_toimimaton__listBtnCode* __this, uString* value, uObject* origin)
{
    __this->SetText(value, origin);
}

// public string get_Text() :62
void textDropDown_toimimaton__listBtnCode__get_Text_fn(textDropDown_toimimaton__listBtnCode* __this, uString** __retval)
{
    *__retval = __this->Text();
}

// public void set_Text(string value) :63
void textDropDown_toimimaton__listBtnCode__set_Text_fn(textDropDown_toimimaton__listBtnCode* __this, uString* value)
{
    __this->Text(value);
}

uSStrong<uArray*> textDropDown_toimimaton__listBtnCode::__g_static_nametable1_;
::g::Uno::UX::Selector textDropDown_toimimaton__listBtnCode::__selector0_;
::g::Uno::UX::Selector textDropDown_toimimaton__listBtnCode::__selector1_;
::g::Uno::UX::Selector textDropDown_toimimaton__listBtnCode::__selector2_;
::g::Uno::UX::Selector textDropDown_toimimaton__listBtnCode::__selector3_;
::g::Uno::UX::Selector textDropDown_toimimaton__listBtnCode::__selector4_;
::g::Uno::UX::Selector textDropDown_toimimaton__listBtnCode::__selector5_;
::g::Uno::UX::Selector textDropDown_toimimaton__listBtnCode::__selector6_;
::g::Uno::UX::Selector textDropDown_toimimaton__listBtnCode::__selector7_;
::g::Uno::UX::Selector textDropDown_toimimaton__listBtnCode::__selector8_;
::g::Uno::UX::Selector textDropDown_toimimaton__listBtnCode::__selector9_;

// public string get_BgColor() [instance] :92
uString* textDropDown_toimimaton__listBtnCode::BgColor()
{
    return _field_BgColor;
}

// public void set_BgColor(string value) [instance] :93
void textDropDown_toimimaton__listBtnCode::BgColor(uString* value)
{
    SetBgColor(value, NULL);
}

// public string get_DataKey() [instance] :77
uString* textDropDown_toimimaton__listBtnCode::DataKey()
{
    return _field_DataKey;
}

// public void set_DataKey(string value) [instance] :78
void textDropDown_toimimaton__listBtnCode::DataKey(uString* value)
{
    SetDataKey(value, NULL);
}

// public float get_FontSize() [instance] :122
float textDropDown_toimimaton__listBtnCode::FontSize()
{
    return _field_FontSize;
}

// public void set_FontSize(float value) [instance] :123
void textDropDown_toimimaton__listBtnCode::FontSize(float value)
{
    SetFontSize(value, NULL);
}

// public string get_SelectedBgColor() [instance] :107
uString* textDropDown_toimimaton__listBtnCode::SelectedBgColor()
{
    return _field_SelectedBgColor;
}

// public void set_SelectedBgColor(string value) [instance] :108
void textDropDown_toimimaton__listBtnCode::SelectedBgColor(uString* value)
{
    SetSelectedBgColor(value, NULL);
}

// public void SetBgColor(string value, Uno.UX.IPropertyListener origin) [instance] :95
void textDropDown_toimimaton__listBtnCode::SetBgColor(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_BgColor))
    {
        _field_BgColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[4/*"BgColor"*/]), origin);
    }
}

// public void SetDataKey(string value, Uno.UX.IPropertyListener origin) [instance] :80
void textDropDown_toimimaton__listBtnCode::SetDataKey(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_DataKey))
    {
        _field_DataKey = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"DataKey"*/]), origin);
    }
}

// public void SetFontSize(float value, Uno.UX.IPropertyListener origin) [instance] :125
void textDropDown_toimimaton__listBtnCode::SetFontSize(float value, uObject* origin)
{
    if (value != _field_FontSize)
    {
        _field_FontSize = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[6/*"FontSize"*/]), origin);
    }
}

// public void SetSelectedBgColor(string value, Uno.UX.IPropertyListener origin) [instance] :110
void textDropDown_toimimaton__listBtnCode::SetSelectedBgColor(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_SelectedBgColor))
    {
        _field_SelectedBgColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[5/*"SelectedBgC...*/]), origin);
    }
}

// public void SetText(string value, Uno.UX.IPropertyListener origin) [instance] :65
void textDropDown_toimimaton__listBtnCode::SetText(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Text))
    {
        _field_Text = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"Text"*/]), origin);
    }
}

// public string get_Text() [instance] :62
uString* textDropDown_toimimaton__listBtnCode::Text()
{
    return _field_Text;
}

// public void set_Text(string value) [instance] :63
void textDropDown_toimimaton__listBtnCode::Text(uString* value)
{
    SetText(value, NULL);
}
// }

} // ::g
