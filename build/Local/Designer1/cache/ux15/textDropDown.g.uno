[Uno.Compiler.UxGenerated]
public partial class textDropDown: Fuse.Controls.Panel
{
    object _field_dropDownList;
    [global::Uno.UX.UXOriginSetter("SetdropDownList")]
    public object dropDownList
    {
        get { return _field_dropDownList; }
        set { SetdropDownList(value, null); }
    }
    public void SetdropDownList(object value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_dropDownList)
        {
            _field_dropDownList = value;
            OnPropertyChanged("dropDownList", origin);
        }
    }
    string _field_Send;
    [global::Uno.UX.UXOriginSetter("SetSend")]
    public string Send
    {
        get { return _field_Send; }
        set { SetSend(value, null); }
    }
    public void SetSend(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Send)
        {
            _field_Send = value;
            OnPropertyChanged("Send", origin);
        }
    }
    string _field_Value;
    [global::Uno.UX.UXOriginSetter("SetValue")]
    public string Value
    {
        get { return _field_Value; }
        set { SetValue(value, null); }
    }
    public void SetValue(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Value)
        {
            _field_Value = value;
            OnPropertyChanged("Value", origin);
        }
    }
    string _field_Name;
    [global::Uno.UX.UXOriginSetter("SetName")]
    public string Name
    {
        get { return _field_Name; }
        set { SetName(value, null); }
    }
    public void SetName(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Name)
        {
            _field_Name = value;
            OnPropertyChanged("Name", origin);
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly textDropDown __parent;
        [Uno.WeakReference] internal readonly textDropDown __parentInstance;
        public Template(textDropDown parent, textDropDown parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Selection.Selection();
            __self.MaxCount = 1;
            __self.SourceLineNumber = 72;
            __self.SourceFileName = "Components/textDropDown.ux";
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly textDropDown __parent;
        [Uno.WeakReference] internal readonly textDropDown __parentInstance;
        public Template1(textDropDown parent, textDropDown parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_Send_inst;
        global::Uno.UX.Property<string> __self_Text_inst;
        global::Uno.UX.Property<string> __self_DataKey_inst;
        internal global::Fuse.Reactive.EventBinding temp_eb24;
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::listBtn.Button();
            __self_Send_inst = new Haslaamispaivakirja_listBtnButton_Send_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("selectThisOption");
            var temp1 = new global::Fuse.Reactive.Data("selectedFunc");
            __self_Text_inst = new Haslaamispaivakirja_listBtnButton_Text_Property(__self, __selector1);
            var temp2 = new global::Fuse.Reactive.Data("name");
            __self_DataKey_inst = new Haslaamispaivakirja_listBtnButton_DataKey_Property(__self, __selector2);
            var temp3 = new global::Fuse.Reactive.Data("key");
            var temp4 = new global::Fuse.Reactive.DataBinding(__self_Send_inst, temp, Fuse.Reactive.BindingMode.Default);
            temp_eb24 = new global::Fuse.Reactive.EventBinding(temp1);
            var temp5 = new global::Fuse.Reactive.DataBinding(__self_Text_inst, temp2, Fuse.Reactive.BindingMode.Default);
            var temp6 = new global::Fuse.Reactive.DataBinding(__self_DataKey_inst, temp3, Fuse.Reactive.BindingMode.Default);
            __self.FontSize = 14f;
            __self.SourceLineNumber = 73;
            __self.SourceFileName = "Components/textDropDown.ux";
            global::Fuse.Gestures.Clicked.AddHandler(__self, temp_eb24.OnEvent);
            temp.SourceLineNumber = 73;
            temp.SourceFileName = "Components/textDropDown.ux";
            temp1.SourceLineNumber = 73;
            temp1.SourceFileName = "Components/textDropDown.ux";
            temp2.SourceLineNumber = 73;
            temp2.SourceFileName = "Components/textDropDown.ux";
            temp3.SourceLineNumber = 73;
            temp3.SourceFileName = "Components/textDropDown.ux";
            __self.Bindings.Add(temp4);
            __self.Bindings.Add(temp_eb24);
            __self.Bindings.Add(temp5);
            __self.Bindings.Add(temp6);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Send";
        static global::Uno.UX.Selector __selector1 = "Text";
        static global::Uno.UX.Selector __selector2 = "DataKey";
    }
    global::Uno.UX.Property<string> mitateit_vihanhallinanmenetelma_Value_inst;
    global::Uno.UX.Property<string> mitateit_vihanhallinanmenetelma_DataKey_inst;
    global::Uno.UX.Property<object> temp_Items_inst;
    global::Uno.UX.Property<Fuse.Elements.Visibility> DropDownShow_Visibility_inst;
    global::Uno.UX.Property<float> DropDownShow_Opacity_inst;
    global::Uno.UX.Property<bool> temp1_Value_inst;
    global::Uno.UX.Property<object> this_dropDownList_inst;
    global::Uno.UX.Property<string> this_Send_inst;
    global::Uno.UX.Property<string> this_Value_inst;
    global::Uno.UX.Property<string> this_Name_inst;
    internal global::basic.TextBoxFakeDropDown mitateit_vihanhallinanmenetelma;
    internal global::Fuse.Reactive.EventBinding temp_eb22;
    internal global::Fuse.Controls.StackPanel DropDownShow;
    internal global::Fuse.Controls.StackPanel DropDownTheList;
    internal global::fa_times closeDropDown;
    internal global::Fuse.Reactive.EventBinding temp_eb23;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "mitateit_vihanhallinanmenetelma",
        "temp_eb22",
        "DropDownShow",
        "DropDownTheList",
        "closeDropDown",
        "temp_eb23"
    };
    static textDropDown()
    {
    }
    [global::Uno.UX.UXConstructor]
    public textDropDown()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this_dropDownList_inst = new Haslaamispaivakirja_textDropDown_dropDownList_Property(this, __selector0);
        this_Send_inst = new Haslaamispaivakirja_textDropDown_Send_Property(this, __selector1);
        this_Value_inst = new Haslaamispaivakirja_textDropDown_Value_Property(this, __selector2);
        this_Name_inst = new Haslaamispaivakirja_textDropDown_Name_Property(this, __selector3);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        mitateit_vihanhallinanmenetelma = new global::basic.TextBoxFakeDropDown();
        mitateit_vihanhallinanmenetelma_Value_inst = new Haslaamispaivakirja_basicTextBoxFakeDropDown_Value_Property(mitateit_vihanhallinanmenetelma, __selector2);
        var temp2 = new global::Fuse.Reactive.Data("dropDownSelVal");
        mitateit_vihanhallinanmenetelma_DataKey_inst = new Haslaamispaivakirja_basicTextBoxFakeDropDown_DataKey_Property(mitateit_vihanhallinanmenetelma, __selector4);
        var temp3 = new global::Fuse.Reactive.Data("dropDownSelKey");
        var temp4 = new global::Fuse.Reactive.Data("dropDownTrigger");
        var temp5 = new global::Fuse.Reactive.Data("closeDropDown");
        var temp6 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Reactive.Each();
        temp_Items_inst = new Haslaamispaivakirja_FuseReactiveEach_Items_Property(temp, __selector5);
        var temp7 = new global::Fuse.Reactive.Property(temp6, Haslaamispaivakirja_accessor_textDropDown_dropDownList.Singleton);
        DropDownShow = new global::Fuse.Controls.StackPanel();
        DropDownShow_Visibility_inst = new Haslaamispaivakirja_FuseElementsElement_Visibility_Property(DropDownShow, __selector6);
        DropDownShow_Opacity_inst = new Haslaamispaivakirja_FuseElementsElement_Opacity_Property(DropDownShow, __selector7);
        var temp1 = new global::Fuse.Triggers.WhileTrue();
        temp1_Value_inst = new Haslaamispaivakirja_FuseTriggersWhileBool_Value_Property(temp1, __selector2);
        var temp8 = new global::Fuse.Reactive.Data("DropDownVisible");
        var temp9 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp10 = new global::Fuse.Controls.StackPanel();
        var temp11 = new global::Fuse.Reactive.DataBinding(mitateit_vihanhallinanmenetelma_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
        var temp12 = new global::Fuse.Reactive.DataBinding(mitateit_vihanhallinanmenetelma_DataKey_inst, temp3, Fuse.Reactive.BindingMode.Default);
        temp_eb22 = new global::Fuse.Reactive.EventBinding(temp4);
        var temp13 = new global::Fuse.Controls.Rectangle();
        DropDownTheList = new global::Fuse.Controls.StackPanel();
        var temp14 = new global::Fuse.Controls.Rectangle();
        closeDropDown = new global::fa_times();
        temp_eb23 = new global::Fuse.Reactive.EventBinding(temp5);
        var temp15 = new global::Fuse.Controls.Text();
        var temp16 = new Template(this, this);
        var temp17 = new Template1(this, this);
        var temp18 = new global::Fuse.Reactive.DataBinding(temp_Items_inst, temp7, Fuse.Reactive.BindingMode.Default);
        var temp19 = new global::Fuse.Animations.Change<Fuse.Elements.Visibility>(DropDownShow_Visibility_inst);
        var temp20 = new global::Fuse.Animations.Change<float>(DropDownShow_Opacity_inst);
        var temp21 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp8, Fuse.Reactive.BindingMode.Default);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Components/textDropDown.ux";
        temp9.Code = "\n\t\tvar property_Value = this.Value.value;\n\n\t\tvar Observable = require(\"FuseJS/Observable\");\n\t\tvar DropDownVisible = Observable(false);\n\t\tvar selectThisOption = Observable();\n\t\tvar dropDownSelVal = Observable(property_Value);\n\t\tvar dropDownSelKey = Observable();\n\n\t\tfunction dropDownTrigger(){\n\t\t\t//console.log('klikki');\n\t\t\tif(DropDownVisible.value){\n\t\t\t\tDropDownVisible.value = false;\n\t\t\t}else{\n\t\t\t\tDropDownVisible.value = true;\n\t\t\t}\n\t\t}\n\n\t\tfunction selectedFunc(a){\n\t\t\tconsole.dir('s',a.data);\n\t\t\tdropDownSelKey.value = a.data.key;\n\t\t\tdropDownSelVal.value = a.data.name;\n\n\t\t\tentrystr = a.data.name;\n\n\t\t\tsetTimeout(function(){\n\t\t\t\tDropDownVisible.value = false;\n\t\t\t},1000);\n\t\t}\n\n\t\tfunction closeDropDown(){\n\t\t\tDropDownVisible.value = false;\n\t\t}\n\n\t\tmodule.exports = {\n\t\t\tDropDownVisible:DropDownVisible,\n\t\t\tdropDownTrigger:dropDownTrigger,\n\t\t\tdropDownSelVal:dropDownSelVal,\n\t\t\tdropDownSelKey:dropDownSelKey,\n\n\t\t\tselectedFunc:selectedFunc,\n\t\t\tselectThisOption:selectThisOption, //tämä ei oikeastaan ole tarpeellinen\n\t\t\tcloseDropDown:closeDropDown\n\t\t};\n\t";
        temp9.LineNumber = 7;
        temp9.FileName = "Components/textDropDown.ux";
        temp9.SourceLineNumber = 7;
        temp9.SourceFileName = "Components/textDropDown.ux";
        temp10.SourceLineNumber = 53;
        temp10.SourceFileName = "Components/textDropDown.ux";
        temp10.Children.Add(mitateit_vihanhallinanmenetelma);
        temp10.Children.Add(DropDownShow);
        mitateit_vihanhallinanmenetelma.TextAlignment = "Left";
        mitateit_vihanhallinanmenetelma.Alignment = Fuse.Elements.Alignment.Default;
        mitateit_vihanhallinanmenetelma.Margin = float4(5f, 0f, 5f, 0f);
        mitateit_vihanhallinanmenetelma.Padding = float4(0f, 0f, 0f, 0f);
        mitateit_vihanhallinanmenetelma.Name = __selector8;
        mitateit_vihanhallinanmenetelma.SourceLineNumber = 55;
        mitateit_vihanhallinanmenetelma.SourceFileName = "Components/textDropDown.ux";
        global::Fuse.Gestures.Clicked.AddHandler(mitateit_vihanhallinanmenetelma, temp_eb22.OnEvent);
        mitateit_vihanhallinanmenetelma.Bindings.Add(temp11);
        mitateit_vihanhallinanmenetelma.Bindings.Add(temp12);
        mitateit_vihanhallinanmenetelma.Bindings.Add(temp_eb22);
        temp2.SourceLineNumber = 55;
        temp2.SourceFileName = "Components/textDropDown.ux";
        temp3.SourceLineNumber = 55;
        temp3.SourceFileName = "Components/textDropDown.ux";
        temp4.SourceLineNumber = 55;
        temp4.SourceFileName = "Components/textDropDown.ux";
        DropDownShow.Visibility = Fuse.Elements.Visibility.Collapsed;
        DropDownShow.Opacity = 0.1f;
        DropDownShow.Name = __selector9;
        DropDownShow.SourceLineNumber = 57;
        DropDownShow.SourceFileName = "Components/textDropDown.ux";
        DropDownShow.Children.Add(temp13);
        DropDownShow.Children.Add(DropDownTheList);
        DropDownShow.Children.Add(temp1);
        temp13.Color = float4(1f, 1f, 1f, 0.2f);
        temp13.Height = new Uno.UX.Size(1f, Uno.UX.Unit.Unspecified);
        temp13.Margin = float4(5f, 0f, 5f, 0f);
        temp13.SourceLineNumber = 59;
        temp13.SourceFileName = "Components/textDropDown.ux";
        DropDownTheList.Color = float4(0f, 0f, 0f, 0.09803922f);
        DropDownTheList.Margin = float4(5f, 0f, 5f, 0f);
        DropDownTheList.Padding = float4(10f, 5f, 10f, 10f);
        DropDownTheList.Opacity = 1f;
        DropDownTheList.Name = __selector10;
        DropDownTheList.SourceLineNumber = 62;
        DropDownTheList.SourceFileName = "Components/textDropDown.ux";
        DropDownTheList.Children.Add(temp14);
        DropDownTheList.Children.Add(temp);
        temp14.SourceLineNumber = 63;
        temp14.SourceFileName = "Components/textDropDown.ux";
        temp14.Children.Add(closeDropDown);
        temp14.Children.Add(temp15);
        closeDropDown.FontSize = 18f;
        closeDropDown.TextAlignment = Fuse.Controls.TextAlignment.Center;
        closeDropDown.Color = Fuse.Drawing.Colors.White;
        closeDropDown.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        closeDropDown.Alignment = Fuse.Elements.Alignment.TopRight;
        closeDropDown.Margin = float4(0f, 5f, 0f, 5f);
        closeDropDown.Padding = float4(5f, 5f, 5f, 5f);
        closeDropDown.Opacity = 1f;
        closeDropDown.Name = __selector11;
        closeDropDown.SourceLineNumber = 64;
        closeDropDown.SourceFileName = "Components/textDropDown.ux";
        global::Fuse.Gestures.Clicked.AddHandler(closeDropDown, temp_eb23.OnEvent);
        closeDropDown.Bindings.Add(temp_eb23);
        temp5.SourceLineNumber = 64;
        temp5.SourceFileName = "Components/textDropDown.ux";
        temp15.Value = "Valitse";
        temp15.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp15.Color = Fuse.Drawing.Colors.White;
        temp15.Margin = float4(0f, 5f, 0f, 5f);
        temp15.SourceLineNumber = 65;
        temp15.SourceFileName = "Components/textDropDown.ux";
        temp.SourceLineNumber = 70;
        temp.SourceFileName = "Components/textDropDown.ux";
        temp.Templates.Add(temp16);
        temp.Templates.Add(temp17);
        temp.Bindings.Add(temp18);
        temp7.SourceLineNumber = 70;
        temp7.SourceFileName = "Components/textDropDown.ux";
        temp6.SourceLineNumber = 70;
        temp6.SourceFileName = "Components/textDropDown.ux";
        temp1.SourceLineNumber = 77;
        temp1.SourceFileName = "Components/textDropDown.ux";
        temp1.Animators.Add(temp19);
        temp1.Animators.Add(temp20);
        temp1.Bindings.Add(temp21);
        temp19.Value = Fuse.Elements.Visibility.Visible;
        temp19.DelayBack = 0.26;
        temp19.Delay = 0;
        temp20.Value = 1f;
        temp20.Duration = 0.36;
        temp8.SourceLineNumber = 77;
        temp8.SourceFileName = "Components/textDropDown.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(mitateit_vihanhallinanmenetelma);
        __g_nametable.Objects.Add(temp_eb22);
        __g_nametable.Objects.Add(DropDownShow);
        __g_nametable.Objects.Add(DropDownTheList);
        __g_nametable.Objects.Add(closeDropDown);
        __g_nametable.Objects.Add(temp_eb23);
        __g_nametable.Properties.Add(this_dropDownList_inst);
        __g_nametable.Properties.Add(this_Send_inst);
        __g_nametable.Properties.Add(this_Value_inst);
        __g_nametable.Properties.Add(this_Name_inst);
        this.Children.Add(temp9);
        this.Children.Add(temp10);
    }
    static global::Uno.UX.Selector __selector0 = "dropDownList";
    static global::Uno.UX.Selector __selector1 = "Send";
    static global::Uno.UX.Selector __selector2 = "Value";
    static global::Uno.UX.Selector __selector3 = "Name";
    static global::Uno.UX.Selector __selector4 = "DataKey";
    static global::Uno.UX.Selector __selector5 = "Items";
    static global::Uno.UX.Selector __selector6 = "Visibility";
    static global::Uno.UX.Selector __selector7 = "Opacity";
    static global::Uno.UX.Selector __selector8 = "mitateit_vihanhallinanmenetelma";
    static global::Uno.UX.Selector __selector9 = "DropDownShow";
    static global::Uno.UX.Selector __selector10 = "DropDownTheList";
    static global::Uno.UX.Selector __selector11 = "closeDropDown";
}
