// This file was generated based on '/Users/petervirtanen/OneDrive/Fuse projektit/Häsläämispäiväkirja/.uno/ux15/ListItem.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Haslaamispaivak-2e334ef9.h>
#include <_root.Haslaamispaivak-7249e982.h>
#include <_root.Haslaamispaivak-8c2039a.h>
#include <_root.Haslaamispaivak-d3464ec1.h>
#include <_root.Haslaamispaivak-f3cea9df.h>
#include <_root.ListItem.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Triggers.WhileString.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[11];
static uType* TYPES[5];

namespace g{

// public partial sealed class ListItem :2
// {
// static ListItem() :43
static void ListItem__cctor_4_fn(uType* __type)
{
    ListItem::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 0);
    ListItem::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"TheValue"*/]);
    ListItem::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"RealLabel"*/]);
    ListItem::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"Value"*/]);
    ListItem::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"Visibility"*/]);
}

static void ListItem_build(uType* type)
{
    ::STRINGS[0] = uString::Const("TheValue");
    ::STRINGS[1] = uString::Const("RealLabel");
    ::STRINGS[2] = uString::Const("Value");
    ::STRINGS[3] = uString::Const("Visibility");
    ::STRINGS[4] = uString::Const("localLabel2");
    ::STRINGS[5] = uString::Const("localLabel");
    ::STRINGS[6] = uString::Const("visibleValue");
    ::STRINGS[7] = uString::Const("visible");
    ::STRINGS[8] = uString::Const("Components/ListItem.ux");
    ::STRINGS[9] = uString::Const("\n"
        "\t\t//console.log(\"List item module init!\");\n"
        "\t\tvar visibleValue = this.TheValue.map(function(x) {\t\t\t\t\t\t\n"
        "\t\t\tif(x == \"True\" || x == \"False\"){\n"
        "\t\t\t\treturn \"Collapsed\";\n"
        "\t\t\t}else{ \n"
        "\t\t\t\treturn \"Visible\";\n"
        "\t\t\t}\n"
        "\t\t});\n"
        "\t\tvar localLabel = this.TheValue.map(function(x) {\n"
        "\t\t\tif(x != \"True\" && x != \"False\"){\n"
        "\t\t\t\treturn x;\n"
        "\t\t\t}\n"
        "\t\t});\n"
        "\t\tvar localLabel2 = this.RealLabel.map(function(labelValue) {\n"
        "\t\t\treturn labelValue;\n"
        "\t\t});\n"
        "\t\tvar visible = this.TheValue.map(function(x) {\n"
        "\t\t\tvar boolean;\n"
        "\t\t\tvar val;\n"
        "\t\t\tif(x === \"True\"){\n"
        "\t\t\t\tboolean = true;\n"
        "\t\t\t}else if(x === \"False\" || x === \"\"){\n"
        "\t\t\t\tboolean = false;\n"
        "\t\t\t}else{\n"
        "\t\t\t\tboolean = true;\n"
        "\t\t\t}\n"
        "\n"
        "\t\t\tif(boolean){\n"
        "\t\t\t\tval = \"Visible\";\n"
        "\t\t\t}else{\n"
        "\t\t\t\tval = \"Collapsed\";\n"
        "\t\t\t}\n"
        "\t\t\treturn val;\n"
        "\t\t});\n"
        "\t\tmodule.exports = {\n"
        "\t\t\tlocalLabel: localLabel,\n"
        "\t\t\tlocalLabel2: localLabel2,\n"
        "\t\t\tvisible:visible,\n"
        "\t\t\tvisibleValue:visibleValue\n"
        "\t\t};\n"
        "\t");
    ::STRINGS[10] = uString::Const("Visible");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL);
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
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(115,
        ::g::Uno::String_typeof(), offsetof(ListItem, _field_TheValue), 0,
        ::g::Uno::String_typeof(), offsetof(ListItem, _field_RealLabel), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListItem, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListItem, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(ListItem, temp2_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListItem, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListItem, this_TheValue_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ListItem, this_RealLabel_inst), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(ListItem, __g_nametable1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&ListItem::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListItem::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListItem::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListItem::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ListItem::__selector3_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* ListItem_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 129;
    options.InterfaceCount = 19;
    options.ObjectSize = sizeof(ListItem);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("ListItem", options);
    type->fp_build_ = ListItem_build;
    type->fp_ctor_ = (void*)ListItem__New4_fn;
    type->fp_cctor_ = ListItem__cctor_4_fn;
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

// public ListItem() :47
void ListItem__ctor_7_fn(ListItem* __this)
{
    __this->ctor_7();
}

// private void InitializeUX() :51
void ListItem__InitializeUX_fn(ListItem* __this)
{
    __this->InitializeUX();
}

// public ListItem New() :47
void ListItem__New4_fn(ListItem** __retval)
{
    *__retval = ListItem::New4();
}

// public string get_RealLabel() :23
void ListItem__get_RealLabel_fn(ListItem* __this, uString** __retval)
{
    *__retval = __this->RealLabel();
}

// public void set_RealLabel(string value) :24
void ListItem__set_RealLabel_fn(ListItem* __this, uString* value)
{
    __this->RealLabel(value);
}

// public void SetRealLabel(string value, Uno.UX.IPropertyListener origin) :26
void ListItem__SetRealLabel_fn(ListItem* __this, uString* value, uObject* origin)
{
    __this->SetRealLabel(value, origin);
}

// public void SetTheValue(string value, Uno.UX.IPropertyListener origin) :11
void ListItem__SetTheValue_fn(ListItem* __this, uString* value, uObject* origin)
{
    __this->SetTheValue(value, origin);
}

// public string get_TheValue() :8
void ListItem__get_TheValue_fn(ListItem* __this, uString** __retval)
{
    *__retval = __this->TheValue();
}

// public void set_TheValue(string value) :9
void ListItem__set_TheValue_fn(ListItem* __this, uString* value)
{
    __this->TheValue(value);
}

uSStrong<uArray*> ListItem::__g_static_nametable1_;
::g::Uno::UX::Selector ListItem::__selector0_;
::g::Uno::UX::Selector ListItem::__selector1_;
::g::Uno::UX::Selector ListItem::__selector2_;
::g::Uno::UX::Selector ListItem::__selector3_;

// public ListItem() [instance] :47
void ListItem::ctor_7()
{
    ctor_6();
    InitializeUX();
}

// private void InitializeUX() [instance] :51
void ListItem::InitializeUX()
{
    this_TheValue_inst = ::g::Haslaamispaivakirja_ListItem_TheValue_Property::New1(this, ListItem::__selector0_);
    this_RealLabel_inst = ::g::Haslaamispaivakirja_ListItem_RealLabel_Property::New1(this, ListItem::__selector1_);
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, ListItem::__g_static_nametable1_);
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::Haslaamispaivakirja_FuseControlsTextControl_Value_Property::New1(temp, ListItem::__selector2_);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[4/*"localLabel2"*/]);
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    temp1_Value_inst = ::g::Haslaamispaivakirja_FuseControlsTextControl_Value_Property::New1(temp1, ListItem::__selector2_);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"localLabel"*/]);
    ::g::Fuse::Controls::Rectangle* temp2 = ::g::Fuse::Controls::Rectangle::New3();
    temp2_Visibility_inst = ::g::Haslaamispaivakirja_FuseElementsElement_Visibility_Property::New1(temp2, ListItem::__selector3_);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"visibleValue"*/]);
    ::g::Fuse::Triggers::WhileString* temp3 = ::g::Fuse::Triggers::WhileString::New2();
    temp3_Value_inst = ::g::Haslaamispaivakirja_FuseTriggersWhileString_Value_Property::New1(temp3, ListItem::__selector2_);
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"visible"*/]);
    ::g::Fuse::Reactive::JavaScript* temp8 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::StackPanel* temp9 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp10 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::SolidColor* temp11 = ::g::Fuse::Drawing::SolidColor::New2();
    ::g::Fuse::Reactive::DataBinding* temp12 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp4, 3);
    ::g::Fuse::Drawing::SolidColor* temp13 = ::g::Fuse::Drawing::SolidColor::New2();
    ::g::Fuse::Reactive::DataBinding* temp14 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp5, 3);
    ::g::Fuse::Reactive::DataBinding* temp15 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Visibility_inst, (uObject*)temp6, 3);
    ::g::Fuse::Reactive::DataBinding* temp16 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp7, 3);
    SourceLineNumber(1);
    SourceFileName(::STRINGS[8/*"Components/...*/]);
    temp8->Code(::STRINGS[9/*"\n\t\t//con...*/]);
    temp8->LineNumber(2);
    temp8->FileName(::STRINGS[8/*"Components/...*/]);
    temp8->SourceLineNumber(2);
    temp8->SourceFileName(::STRINGS[8/*"Components/...*/]);
    temp3->Equals2(::STRINGS[10/*"Visible"*/]);
    temp3->SourceLineNumber(47);
    temp3->SourceFileName(::STRINGS[8/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Nodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp16);
    temp9->Margin(::g::Uno::Float4__New2(15.0f, 2.0f, 15.0f, 2.0f));
    temp9->SourceLineNumber(48);
    temp9->SourceFileName(::STRINGS[8/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp10->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 10.0f));
    temp10->Padding(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 10.0f));
    temp10->SourceLineNumber(49);
    temp10->SourceFileName(::STRINGS[8/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Fills()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp11->Color(::g::Uno::Float4__New2(1.0f, 0.9843137f, 0.9843137f, 0.4980392f));
    temp->TextWrapping(1);
    temp->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.6666667f));
    temp->Alignment(10);
    temp->SourceLineNumber(51);
    temp->SourceFileName(::STRINGS[8/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    temp4->SourceLineNumber(51);
    temp4->SourceFileName(::STRINGS[8/*"Components/...*/]);
    temp2->Margin(::g::Uno::Float4__New2(0.0f, -10.0f, 0.0f, 0.0f));
    temp2->Padding(::g::Uno::Float4__New2(15.0f, 10.0f, 15.0f, 10.0f));
    temp2->SourceLineNumber(53);
    temp2->SourceFileName(::STRINGS[8/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Fills()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp15);
    temp13->Color(::g::Uno::Float4__New2(0.9686275f, 0.9686275f, 1.0f, 0.6980392f));
    temp1->TextWrapping(1);
    temp1->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.6666667f));
    temp1->Alignment(10);
    temp1->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp1->SourceLineNumber(55);
    temp1->SourceFileName(::STRINGS[8/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp14);
    temp5->SourceLineNumber(55);
    temp5->SourceFileName(::STRINGS[8/*"Components/...*/]);
    temp6->SourceLineNumber(53);
    temp6->SourceFileName(::STRINGS[8/*"Components/...*/]);
    temp7->SourceLineNumber(47);
    temp7->SourceFileName(::STRINGS[8/*"Components/...*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[4/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_TheValue_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[4/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_RealLabel_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
}

// public string get_RealLabel() [instance] :23
uString* ListItem::RealLabel()
{
    return _field_RealLabel;
}

// public void set_RealLabel(string value) [instance] :24
void ListItem::RealLabel(uString* value)
{
    SetRealLabel(value, NULL);
}

// public void SetRealLabel(string value, Uno.UX.IPropertyListener origin) [instance] :26
void ListItem::SetRealLabel(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_RealLabel))
    {
        _field_RealLabel = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"RealLabel"*/]), origin);
    }
}

// public void SetTheValue(string value, Uno.UX.IPropertyListener origin) [instance] :11
void ListItem::SetTheValue(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_TheValue))
    {
        _field_TheValue = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"TheValue"*/]), origin);
    }
}

// public string get_TheValue() [instance] :8
uString* ListItem::TheValue()
{
    return _field_TheValue;
}

// public void set_TheValue(string value) [instance] :9
void ListItem::TheValue(uString* value)
{
    SetTheValue(value, NULL);
}

// public ListItem New() [static] :47
ListItem* ListItem::New4()
{
    ListItem* obj1 = (ListItem*)uNew(ListItem_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

} // ::g
