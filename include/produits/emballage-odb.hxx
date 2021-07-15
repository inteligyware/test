// This file was generated by ODB, object-relational mapping (ORM)
// compiler for C++.
//

#ifndef EMBALLAGE_ODB_HXX
#define EMBALLAGE_ODB_HXX

// Begin prologue.
//
#include <odb/qt/version.hxx>
#if ODB_QT_VERSION != 2040000 // 2.4.0
#  error ODB and C++ compilers see different libodb-qt interface versions
#endif
#include <odb/qt/basic/pgsql/qstring-traits.hxx>
#include <odb/qt/basic/pgsql/qbyte-array-traits.hxx>
#include <odb/qt/basic/pgsql/quuid-traits.hxx>
#include <odb/qt/containers/qhash-traits.hxx>
#include <odb/qt/containers/qlist-traits.hxx>
#include <odb/qt/containers/qlinked-list-traits.hxx>
#include <odb/qt/containers/qmap-traits.hxx>
#include <odb/qt/containers/qset-traits.hxx>
#include <odb/qt/containers/qvector-traits.hxx>
#include <odb/qt/date-time/pgsql/qdate-traits.hxx>
#include <odb/qt/date-time/pgsql/qtime-traits.hxx>
#include <odb/qt/date-time/pgsql/qdate-time-traits.hxx>
#include <QtCore/QSharedPointer>
#include <odb/qt/smart-ptr/pointer-traits.hxx>
#include <odb/qt/smart-ptr/wrapper-traits.hxx>
#include <QtCore/QSharedPointer>


//
// End prologue.

#include <odb/version.hxx>

#if (ODB_VERSION != 20400UL)
#error ODB runtime version mismatch
#endif

#include <odb/pre.hxx>

#include "emballage.hxx"

#include "fournisseur-odb.hxx"
#include "histprix-odb.hxx"
#include "prixfourn-odb.hxx"
#include "produit-odb.hxx"
#include "tonnage-odb.hxx"

#include <memory>
#include <cstddef>

#include <odb/core.hxx>
#include <odb/traits.hxx>
#include <odb/callback.hxx>
#include <odb/wrapper-traits.hxx>
#include <odb/pointer-traits.hxx>
#include <odb/container-traits.hxx>
#include <odb/session.hxx>
#include <odb/cache-traits.hxx>
#include <odb/result.hxx>
#include <odb/simple-object-result.hxx>

#include <odb/details/unused.hxx>
#include <odb/details/shared-ptr.hxx>

namespace odb
{
  // Emballage
  //
  template <>
  struct class_traits< ::Emballage >
  {
    static const class_kind kind = class_object;
  };

  template <>
  class access::object_traits< ::Emballage >
  {
    public:
    typedef ::Emballage object_type;
    typedef ::QSharedPointer< ::Emballage > pointer_type;
    typedef odb::pointer_traits<pointer_type> pointer_traits;

    static const bool polymorphic = false;

    typedef ::QString id_type;

    static const bool auto_id = false;

    static const bool abstract = false;

    static id_type
    id (const object_type&);

    typedef
    odb::pointer_cache_traits<
      pointer_type,
      odb::session >
    pointer_cache_traits;

    typedef
    odb::reference_cache_traits<
      object_type,
      odb::session >
    reference_cache_traits;

    static void
    callback (database&, object_type&, callback_event);

    static void
    callback (database&, const object_type&, callback_event);
  };
}

#include <odb/details/buffer.hxx>

#include <odb/pgsql/version.hxx>
#include <odb/pgsql/forward.hxx>
#include <odb/pgsql/binding.hxx>
#include <odb/pgsql/pgsql-types.hxx>
#include <odb/pgsql/query.hxx>

namespace odb
{
  // Emballage
  //
  template <typename A>
  struct query_columns< ::Emballage, id_pgsql, A >
  {
    // libele
    //
    typedef
    pgsql::query_column<
      pgsql::value_traits<
        ::QString,
        pgsql::id_string >::query_type,
      pgsql::id_string >
    libele_type_;

    static const libele_type_ libele;

    // description
    //
    typedef
    pgsql::query_column<
      pgsql::value_traits<
        ::QString,
        pgsql::id_string >::query_type,
      pgsql::id_string >
    description_type_;

    static const description_type_ description;
  };

  template <typename A>
  const typename query_columns< ::Emballage, id_pgsql, A >::libele_type_
  query_columns< ::Emballage, id_pgsql, A >::
  libele (A::table_name, "\"libele\"", 0);

  template <typename A>
  const typename query_columns< ::Emballage, id_pgsql, A >::description_type_
  query_columns< ::Emballage, id_pgsql, A >::
  description (A::table_name, "\"description\"", 0);

  template <typename A>
  struct pointer_query_columns< ::Emballage, id_pgsql, A >:
    query_columns< ::Emballage, id_pgsql, A >
  {
  };

  template <>
  class access::object_traits_impl< ::Emballage, id_pgsql >:
    public access::object_traits< ::Emballage >
  {
    public:
    struct id_image_type
    {
      details::buffer id_value;
      std::size_t id_size;
      bool id_null;

      std::size_t version;
    };

    struct image_type
    {
      // libele_
      //
      details::buffer libele_value;
      std::size_t libele_size;
      bool libele_null;

      // description_
      //
      details::buffer description_value;
      std::size_t description_size;
      bool description_null;

      std::size_t version;
    };

    struct extra_statement_cache_type;

    // tonnages_
    //
    struct tonnages_traits
    {
      static const char select_name[];
      static const char insert_name[];
      static const char delete_name[];

      static const unsigned int insert_types[];

      static const std::size_t id_column_count = 1UL;
      static const std::size_t data_column_count = 2UL;

      static const bool versioned = false;

      static const char insert_statement[];
      static const char select_statement[];
      static const char delete_statement[];

      typedef ::odb::vector< ::QLazyWeakPointer< ::Tonnage > > container_type;
      typedef
      odb::access::container_traits<container_type>
      container_traits_type;
      typedef container_traits_type::index_type index_type;
      typedef container_traits_type::value_type value_type;

      typedef ordered_functions<index_type, value_type> functions_type;
      typedef pgsql::container_statements< tonnages_traits > statements_type;

      struct data_image_type
      {
        // value
        //
        int value_value;
        bool value_null;

        std::size_t version;
      };

      static void
      bind (pgsql::bind*,
            const pgsql::bind* id,
            std::size_t id_size,
            data_image_type&);

      static void
      grow (data_image_type&,
            bool*);

      static void
      init (value_type&,
            const data_image_type&,
            database*);

      static void
      insert (index_type, const value_type&, void*);

      static bool
      select (index_type&, value_type&, void*);

      static void
      delete_ (void*);

      static void
      load (container_type&,
            statements_type&);
    };

    using object_traits<object_type>::id;

    static id_type
    id (const image_type&);

    static bool
    grow (image_type&,
          bool*);

    static void
    bind (pgsql::bind*,
          image_type&,
          pgsql::statement_kind);

    static void
    bind (pgsql::bind*, id_image_type&);

    static bool
    init (image_type&,
          const object_type&,
          pgsql::statement_kind);

    static void
    init (object_type&,
          const image_type&,
          database*);

    static void
    init (id_image_type&, const id_type&);

    typedef pgsql::object_statements<object_type> statements_type;

    typedef pgsql::query_base query_base_type;

    static const std::size_t column_count = 2UL;
    static const std::size_t id_column_count = 1UL;
    static const std::size_t inverse_column_count = 0UL;
    static const std::size_t readonly_column_count = 0UL;
    static const std::size_t managed_optimistic_column_count = 0UL;

    static const std::size_t separate_load_column_count = 0UL;
    static const std::size_t separate_update_column_count = 0UL;

    static const bool versioned = false;

    static const char persist_statement[];
    static const char find_statement[];
    static const char update_statement[];
    static const char erase_statement[];
    static const char query_statement[];
    static const char erase_query_statement[];

    static const char table_name[];

    static void
    persist (database&, const object_type&);

    static pointer_type
    find (database&, const id_type&);

    static bool
    find (database&, const id_type&, object_type&);

    static bool
    reload (database&, object_type&);

    static void
    update (database&, const object_type&);

    static void
    erase (database&, const id_type&);

    static void
    erase (database&, const object_type&);

    static result<object_type>
    query (database&, const query_base_type&);

    static unsigned long long
    erase_query (database&, const query_base_type&);

    static const char persist_statement_name[];
    static const char find_statement_name[];
    static const char update_statement_name[];
    static const char erase_statement_name[];
    static const char query_statement_name[];
    static const char erase_query_statement_name[];

    static const unsigned int persist_statement_types[];
    static const unsigned int find_statement_types[];
    static const unsigned int update_statement_types[];

    public:
    static bool
    find_ (statements_type&,
           const id_type*);

    static void
    load_ (statements_type&,
           object_type&,
           bool reload);
  };

  template <>
  class access::object_traits_impl< ::Emballage, id_common >:
    public access::object_traits_impl< ::Emballage, id_pgsql >
  {
  };

  // Emballage
  //
}

#include "emballage-odb.ixx"

#include <odb/post.hxx>

#endif // EMBALLAGE_ODB_HXX