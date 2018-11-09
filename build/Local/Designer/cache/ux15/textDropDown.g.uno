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
    string _field_SendName;
    [global::Uno.UX.UXOriginSetter("SetSendName")]
    public string SendName
    {
        get { return _field_SendName; }
        set { SetSendName(value, null); }
    }
    public void SetSendName(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_SendName)
        {
            _field_SendName = value;
            OnPropertyChanged("SendName", origin);
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
            __self.SourceLineNumber = 78;
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
        global::Uno.UX.Property<Uno.UX.Selector> __self_Name_inst;
        global::Uno.UX.Property<string> __self_Send_inst;
        global::Uno.UX.Property<string> __self_Text_inst;
        global::Uno.UX.Property<string> __self_DataKey_inst;
        internal global::Fuse.Reactive.EventBinding temp_eb23;
        internal global::Fuse.Reactive.EventBinding temp_eb24;
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::listBtn.Button();
            var temp = new global::Fuse.Reactive.Data("selectedFunc");
            var temp1 = new global::Fuse.Reactive.Data("isOnInputDropDown");
            __self_Name_inst = new Haslaamispaivakirja_FuseNode_Name_Property(__self, __selector0);
            var temp2 = new global::Fuse.Reactive.Data("property_Name");
            __self_Send_inst = new Haslaamispaivakirja_listBtnButton_Send_Property(__self, __selector1);
            var temp3 = new global::Fuse.Reactive.Data("selectThisOption");
            __self_Text_inst = new Haslaamispaivakirja_listBtnButton_Text_Property(__self, __selector2);
            var temp4 = new global::Fuse.Reactive.Data("name");
            __self_DataKey_inst = new Haslaamispaivakirja_listBtnButton_DataKey_Property(__self, __selector3);
            var temp5 = new global::Fuse.Reactive.Data("key");
            var temp6 = new global::Fuse.Gestures.Clicked();
            var temp7 = new global::Fuse.Triggers.Actions.Callback();
            var temp8 = new global::Fuse.Triggers.Actions.Callback();
            temp_eb23 = new global::Fuse.Reactive.EventBinding(temp);
            temp_eb24 = new global::Fuse.Reactive.EventBinding(temp1);
            var temp9 = new global::Fuse.Reactive.DataBinding(__self_Name_inst, temp2, Fuse.Reactive.BindingMode.Default);
            var temp10 = new global::Fuse.Reactive.DataBinding(__self_Send_inst, temp3, Fuse.Reactive.BindingMode.Default);
            var temp11 = new global::Fuse.Reactive.DataBinding(__self_Text_inst, temp4, Fuse.Reactive.BindingMode.Default);
            var temp12 = new global::Fuse.Reactive.DataBinding(__self_DataKey_inst, temp5, Fuse.Reactive.BindingMode.Default);
            __self.FontSize = 14f;
            __self.SourceLineNumber = 79;
            __self.SourceFileName = "Components/textDropDown.ux";
            temp6.SourceLineNumber = 80;
            temp6.SourceFileName = "Components/textDropDown.ux";
            temp6.Actions.Add(temp7);
            temp6.Actions.Add(temp8);
            temp6.Bindings.Add(temp_eb23);
            temp6.Bindings.Add(temp_eb24);
            temp7.SourceLineNumber = 82;
            temp7.SourceFileName = "Components/textDropDown.ux";
            temp7.Handler += temp_eb23.OnEvent;
            temp.SourceLineNumber = 82;
            temp.SourceFileName = "Components/textDropDown.ux";
            temp8.SourceLineNumber = 83;
            temp8.SourceFileName = "Components/textDropDown.ux";
            temp8.Handler += temp_eb24.OnEvent;
            temp1.SourceLineNumber = 83;
            temp1.SourceFileName = "Components/textDropDown.ux";
            temp2.SourceLineNumber = 79;
            temp2.SourceFileName = "Components/textDropDown.ux";
            temp3.SourceLineNumber = 79;
            temp3.SourceFileName = "Components/textDropDown.ux";
            temp4.SourceLineNumber = 79;
            temp4.SourceFileName = "Components/textDropDown.ux";
            temp5.SourceLineNumber = 79;
            temp5.SourceFileName = "Components/textDropDown.ux";
            __self.Children.Add(temp6);
            __self.Bindings.Add(temp9);
            __self.Bindings.Add(temp10);
            __self.Bindings.Add(temp11);
            __self.Bindings.Add(temp12);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Name";
        static global::Uno.UX.Selector __selector1 = "Send";
        static global::Uno.UX.Selector __selector2 = "Text";
        static global::Uno.UX.Selector __selector3 = "DataKey";
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp_DataKey_inst;
    global::Uno.UX.Property<object> temp1_Items_inst;
    global::Uno.UX.Property<Fuse.Elements.Visibility> DropDownShow_Visibility_inst;
    global::Uno.UX.Property<float> DropDownShow_Opacity_inst;
    global::Uno.UX.Property<bool> temp2_Value_inst;
    global::Uno.UX.Property<object> this_dropDownList_inst;
    global::Uno.UX.Property<string> this_Send_inst;
    global::Uno.UX.Property<string> this_SendName_inst;
    global::Uno.UX.Property<string> this_Value_inst;
    global::Uno.UX.Property<string> this_Name_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb21;
    internal global::Fuse.Controls.StackPanel DropDownShow;
    internal global::Fuse.Controls.StackPanel DropDownTheList;
    internal global::fa_times closeDropDown;
    internal global::Fuse.Reactive.EventBinding temp_eb22;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "temp_eb21",
        "DropDownShow",
        "DropDownTheList",
        "closeDropDown",
        "temp_eb22"
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
        this_SendName_inst = new Haslaamispaivakirja_textDropDown_SendName_Property(this, __selector2);
        this_Value_inst = new Haslaamispaivakirja_textDropDown_Value_Property(this, __selector3);
        this_Name_inst = new Haslaamispaivakirja_textDropDown_Name_Property(this, __selector4);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::basic.TextBoxFakeDropDown();
        temp_Value_inst = new Haslaamispaivakirja_basicTextBoxFakeDropDown_Value_Property(temp, __selector3);
        var temp3 = new global::Fuse.Reactive.Data("dropDownSelVal");
        temp_DataKey_inst = new Haslaamispaivakirja_basicTextBoxFakeDropDown_DataKey_Property(temp, __selector5);
        var temp4 = new global::Fuse.Reactive.Data("dropDownSelKey");
        var temp5 = new global::Fuse.Reactive.Data("dropDownTrigger");
        var temp6 = new global::Fuse.Reactive.Data("closeDropDown");
        var temp7 = new global::Fuse.Reactive.Constant(this);
        var temp1 = new global::Fuse.Reactive.Each();
        temp1_Items_inst = new Haslaamispaivakirja_FuseReactiveEach_Items_Property(temp1, __selector6);
        var temp8 = new global::Fuse.Reactive.Property(temp7, Haslaamispaivakirja_accessor_textDropDown_dropDownList.Singleton);
        DropDownShow = new global::Fuse.Controls.StackPanel();
        DropDownShow_Visibility_inst = new Haslaamispaivakirja_FuseElementsElement_Visibility_Property(DropDownShow, __selector7);
        DropDownShow_Opacity_inst = new Haslaamispaivakirja_FuseElementsElement_Opacity_Property(DropDownShow, __selector8);
        var temp2 = new global::Fuse.Triggers.WhileTrue();
        temp2_Value_inst = new Haslaamispaivakirja_FuseTriggersWhileBool_Value_Property(temp2, __selector3);
        var temp9 = new global::Fuse.Reactive.Data("DropDownVisible");
        var temp10 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp11 = new global::Fuse.Controls.StackPanel();
        var temp12 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
        var temp13 = new global::Fuse.Reactive.DataBinding(temp_DataKey_inst, temp4, Fuse.Reactive.BindingMode.Default);
        temp_eb21 = new global::Fuse.Reactive.EventBinding(temp5);
        var temp14 = new global::Fuse.Controls.Rectangle();
        DropDownTheList = new global::Fuse.Controls.StackPanel();
        var temp15 = new global::Fuse.Controls.Rectangle();
        closeDropDown = new global::fa_times();
        temp_eb22 = new global::Fuse.Reactive.EventBinding(temp6);
        var temp16 = new global::Fuse.Controls.Text();
        var temp17 = new Template(this, this);
        var property_Name = new Template1(this, this);
        var temp18 = new global::Fuse.Reactive.DataBinding(temp1_Items_inst, temp8, Fuse.Reactive.BindingMode.Default);
        var temp19 = new global::Fuse.Animations.Change<Fuse.Elements.Visibility>(DropDownShow_Visibility_inst);
        var temp20 = new global::Fuse.Animations.Change<float>(DropDownShow_Opacity_inst);
        var temp21 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp9, Fuse.Reactive.BindingMode.Default);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Components/textDropDown.ux";
        temp10.Code = "\n\t\tvar property_Value = this.Value.value;\n\t\tvar property_Name = this.Name.value;\n\n\t\tthis.SendName.value = property_Name;\n\n\t\tvar Observable = require(\"FuseJS/Observable\");\n\t\tvar DropDownVisible = Observable(false);\n\t\tvar selectThisOption = Observable();\n\t\tvar dropDownSelVal = Observable(property_Value);\n\t\tvar dropDownSelKey = Observable();\n\n\t\tfunction dropDownTrigger(){\n\t\t\tif(DropDownVisible.value){\n\t\t\t\tDropDownVisible.value = false;\n\t\t\t}else{\n\t\t\t\tDropDownVisible.value = true;\n\t\t\t}\n\t\t}\n\n\t\tfunction selectedFunc(a){\n\t\t\tconsole.dir('s',a.data);\n\t\t\tdropDownSelKey.value = a.data.key;\n\t\t\tdropDownSelVal.value = a.data.name;\n\n\t\t\tentrystr = a.data.name;\n\t\t\tentrystrSendName = property_Name;\n\t\t\t\n\t\t\tsetTimeout(function(){\n\t\t\t\tDropDownVisible.value = false;\n\t\t\t},1000);\n\t\t}\n\n\t\tfunction closeDropDown(){\n\t\t\tDropDownVisible.value = false;\n\t\t}\n\n\t\tmodule.exports = {\n\t\t\tDropDownVisible:DropDownVisible,\n\t\t\tdropDownTrigger:dropDownTrigger,\n\t\t\tdropDownSelVal:dropDownSelVal,\n\t\t\tdropDownSelKey:dropDownSelKey,\n\n\t\t\tselectedFunc:selectedFunc,\n\t\t\tselectThisOption:selectThisOption, //tämä ei oikeastaan ole tarpeellinen\n\t\t\tcloseDropDown:closeDropDown\n\t\t};\n\t";
        temp10.LineNumber = 8;
        temp10.FileName = "Components/textDropDown.ux";
        temp10.SourceLineNumber = 8;
        temp10.SourceFileName = "Components/textDropDown.ux";
        temp11.SourceLineNumber = 57;
        temp11.SourceFileName = "Components/textDropDown.ux";
        temp11.Children.Add(temp);
        temp11.Children.Add(DropDownShow);
        temp.TextAlignment = "Left";
        temp.Alignment = Fuse.Elements.Alignment.Default;
        temp.Margin = float4(5f, 0f, 5f, 0f);
        temp.Padding = float4(0f, 0f, 0f, 0f);
        temp.SourceLineNumber = 59;
        temp.SourceFileName = "Components/textDropDown.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp, temp_eb21.OnEvent);
        temp.Bindings.Add(temp12);
        temp.Bindings.Add(temp13);
        temp.Bindings.Add(temp_eb21);
        temp3.SourceLineNumber = 59;
        temp3.SourceFileName = "Components/textDropDown.ux";
        temp4.SourceLineNumber = 59;
        temp4.SourceFileName = "Components/textDropDown.ux";
        temp5.SourceLineNumber = 59;
        temp5.SourceFileName = "Components/textDropDown.ux";
        DropDownShow.Visibility = Fuse.Elements.Visibility.Collapsed;
        DropDownShow.Opacity = 0.1f;
        DropDownShow.Name = __selector9;
        DropDownShow.SourceLineNumber = 63;
        DropDownShow.SourceFileName = "Components/textDropDown.ux";
        DropDownShow.Children.Add(temp14);
        DropDownShow.Children.Add(DropDownTheList);
        DropDownShow.Children.Add(temp2);
        temp14.Color = float4(1f, 1f, 1f, 0.2f);
        temp14.Height = new Uno.UX.Size(1f, Uno.UX.Unit.Unspecified);
        temp14.Margin = float4(5f, 0f, 5f, 0f);
        temp14.SourceLineNumber = 65;
        temp14.SourceFileName = "Components/textDropDown.ux";
        DropDownTheList.Color = float4(0f, 0f, 0f, 0.09803922f);
        DropDownTheList.Margin = float4(5f, 0f, 5f, 0f);
        DropDownTheList.Padding = float4(10f, 5f, 10f, 10f);
        DropDownTheList.Opacity = 1f;
        DropDownTheList.Name = __selector10;
        DropDownTheList.SourceLineNumber = 68;
        DropDownTheList.SourceFileName = "Components/textDropDown.ux";
        DropDownTheList.Children.Add(temp15);
        DropDownTheList.Children.Add(temp1);
        temp15.SourceLineNumber = 69;
        temp15.SourceFileName = "Components/textDropDown.ux";
        temp15.Children.Add(closeDropDown);
        temp15.Children.Add(temp16);
        closeDropDown.FontSize = 18f;
        closeDropDown.TextAlignment = Fuse.Controls.TextAlignment.Center;
        closeDropDown.Color = Fuse.Drawing.Colors.White;
        closeDropDown.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        closeDropDown.Alignment = Fuse.Elements.Alignment.TopRight;
        closeDropDown.Margin = float4(0f, 5f, 0f, 5f);
        closeDropDown.Padding = float4(5f, 5f, 5f, 5f);
        closeDropDown.Opacity = 1f;
        closeDropDown.Name = __selector11;
        closeDropDown.SourceLineNumber = 70;
        closeDropDown.SourceFileName = "Components/textDropDown.ux";
        global::Fuse.Gestures.Clicked.AddHandler(closeDropDown, temp_eb22.OnEvent);
        closeDropDown.Bindings.Add(temp_eb22);
        temp6.SourceLineNumber = 70;
        temp6.SourceFileName = "Components/textDropDown.ux";
        temp16.Value = "Valitse";
        temp16.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp16.Color = Fuse.Drawing.Colors.White;
        temp16.Margin = float4(0f, 5f, 0f, 5f);
        temp16.SourceLineNumber = 71;
        temp16.SourceFileName = "Components/textDropDown.ux";
        temp1.SourceLineNumber = 76;
        temp1.SourceFileName = "Components/textDropDown.ux";
        temp1.Templates.Add(temp17);
        temp1.Templates.Add(property_Name);
        temp1.Bindings.Add(temp18);
        temp8.SourceLineNumber = 76;
        temp8.SourceFileName = "Components/textDropDown.ux";
        temp7.SourceLineNumber = 76;
        temp7.SourceFileName = "Components/textDropDown.ux";
        temp2.SourceLineNumber = 89;
        temp2.SourceFileName = "Components/textDropDown.ux";
        temp2.Animators.Add(temp19);
        temp2.Animators.Add(temp20);
        temp2.Bindings.Add(temp21);
        temp19.Value = Fuse.Elements.Visibility.Visible;
        temp19.DelayBack = 0.26;
        temp19.Delay = 0;
        temp20.Value = 1f;
        temp20.Duration = 0.36;
        temp9.SourceLineNumber = 89;
        temp9.SourceFileName = "Components/textDropDown.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(temp_eb21);
        __g_nametable.Objects.Add(DropDownShow);
        __g_nametable.Objects.Add(DropDownTheList);
        __g_nametable.Objects.Add(closeDropDown);
        __g_nametable.Objects.Add(temp_eb22);
        __g_nametable.Properties.Add(this_dropDownList_inst);
        __g_nametable.Properties.Add(this_Send_inst);
        __g_nametable.Properties.Add(this_SendName_inst);
        __g_nametable.Properties.Add(this_Value_inst);
        __g_nametable.Properties.Add(this_Name_inst);
        this.Children.Add(temp10);
        this.Children.Add(temp11);
    }
    static global::Uno.UX.Selector __selector0 = "dropDownList";
    static global::Uno.UX.Selector __selector1 = "Send";
    static global::Uno.UX.Selector __selector2 = "SendName";
    static global::Uno.UX.Selector __selector3 = "Value";
    static global::Uno.UX.Selector __selector4 = "Name";
    static global::Uno.UX.Selector __selector5 = "DataKey";
    static global::Uno.UX.Selector __selector6 = "Items";
    static global::Uno.UX.Selector __selector7 = "Visibility";
    static global::Uno.UX.Selector __selector8 = "Opacity";
    static global::Uno.UX.Selector __selector9 = "DropDownShow";
    static global::Uno.UX.Selector __selector10 = "DropDownTheList";
    static global::Uno.UX.Selector __selector11 = "closeDropDown";
}
